#include "Application.h"
#include "Display.h"
#include "InputManager.h"

void Application::ClearScreen()
{
#ifdef _WIN32
	std::system("cls");
#else
	std::system("clear");
#endif
}

void Application::ShowMenu() { Display::ShowMenu(); }

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
		//Find by name
		break;
	}
	case 4:
	{
		DeleteById();
		break;
	}
	case 5:
	{
		isRunning = false;
		break;
	}

	default:
		break;
	}
}

void Application::AddPerson() { persons.push_back(InputManager::EnterPerson()); }

void Application::ShowPersonTable()
{
	Display::ShowTable(persons);
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	ClearScreen();
}

void Application::DeleteById()
{
	int choiceId = InputManager::GetId();
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

	std::cout << "Person with ID: " << choiceId << " not found." << std::endl;
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
}

Application::Application() : isRunning(true)
{}

void Application::Run()
{
	while (isRunning)
	{
		ShowMenu();
		HandleChoice(InputManager::GetChoice());
		ClearScreen();
	}
}

