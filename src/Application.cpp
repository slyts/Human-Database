#include "Application.h"

void Application::ClearScreen() const
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
	case MenuSwitcher::ADD_HUMAN:
	{
		AddPerson();
		break;
	}
	case MenuSwitcher::SHOW_TABLE:
	{
		ShowPersonTable();
		break;
	}
	case MenuSwitcher::FIND_NAME:
	{
		FindByName();
		break;
	}
	case MenuSwitcher::DELETE_BY_ID:
	{
		DeleteById();
		break;
	}
	case MenuSwitcher::EXIT:
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

void Application::ShowPersonTable() const
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
			Save();
			return;
		}
	}
	
	std::cout << "Person with ID: " << choiceId << " not found." << std::endl;
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
}

void Application::FindByName() const
{
	std::string name = InputManager::EnterName();
	std::vector<Person> found;

	for (const auto& person : persons)
	{
		if (name == person.GetName())
		{
			found.push_back(person);
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
