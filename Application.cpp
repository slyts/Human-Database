#include "Application.h"

void Application::ClearScreen()
{
#ifdef _WIN32
	std::system("cls");
#else
	std::system("clear");
#endif
}

void Application::HandleChoice(int choice)
{
	switch (choice)
	{
	case 1:
	{
		AddPerson();
		break;
	}
	case 2:
	{
		ShowPersonTable();
		break;
	}
	case 3:
	{
		FindByName();
		break;
	}
	case 4:
	{
		DeleteById();
		break;
	}
	case 5:
	{
		Save();
		isRunning = false;
		break;
	}

	default:
		break;
	}
}

void Application::AddPerson() 
{ 
	persons.push_back(InputManager::EnterPerson());
	Save();
}

void Application::ShowPersonTable()
{
	Display::ShowTable(persons);
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	ClearScreen();
}

void Application::DeleteById()
{
	int choiceId = InputManager::EnterId();
	for (auto i = persons.begin(); i != persons.end(); i++)
	{
		if (i->GetId() == choiceId)
		{
			persons.erase(i);
			std::cout << "Person with ID: " << choiceId << " deleted." << std::endl;
			std::cout << "\nPress Enter to continue...";
			std::cin.ignore();
			return;
		}
	}
	Save();
	std::cout << "Person with ID: " << choiceId << " not found." << std::endl;
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
}

void Application::FindByName()
{
	std::string name = InputManager::EnterName();
	std::vector<Person> found;

	for (size_t i = 0; i != persons.size(); i++)
	{
		if (name == persons[i].GetName())
		{
			found.push_back(persons[i]);
		}
	}

	if (!found.empty())
		Display::ShowTable(found);
	else
		std::cout << "Person with Name: " << name << " not found." << std::endl;

	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	ClearScreen();
}

Application::Application() : isRunning(true)
{
	Read();
}

void Application::Run()
{
	while (isRunning)
	{
		Display::ShowMenu();
		HandleChoice(InputManager::GetChoice());
		ClearScreen();
	}
}

void Application::Save() const
{
	PersonSaver saver("Persons.txt");
	saver.Write(persons);
}

void Application::Read()
{
	PersonReader reader("Persons.txt");
	persons = reader.Read();
}
