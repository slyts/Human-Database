#include "InputManager.h"

std::string InputManager::EnterName()
{
	std::string name;
	while (name.empty())
	{
		std::cout << "Enter Name: ";
		std::getline(std::cin, name);
	}
	return name;
}

int InputManager::EnterId()
{
	int id;
	std::cout << "Enter Id: ";
	std::cin >> id;
	std::cin.ignore();
	return id;
}

int InputManager::GetChoice()
{
	int choice;
	std::cin >> choice;
	std::cin.ignore();
	return choice;
}

Person InputManager::EnterPerson()
{
	std::string name;
	std::string surname;
	std::string patronymic;
	std::string mobilePhone;
	std::string birthDay;

	while (name.empty())
	{
		std::cout << "Enter Name: ";
		std::getline(std::cin, name);
	}

	while (surname.empty())
	{
		std::cout << "Enter Surname: ";
		std::getline(std::cin, surname);
	}

	std::cout << "Enter Patronymic: ";
	std::getline(std::cin, patronymic);

	std::cout << "Enter MobilePhone: ";
	std::getline(std::cin, mobilePhone);

	std::cout << "Enter BirthDay: ";
	std::getline(std::cin, birthDay);

	Person person(name, surname, patronymic, mobilePhone, birthDay);
	return person;
}
