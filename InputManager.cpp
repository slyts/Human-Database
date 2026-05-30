#include "InputManager.h"

int InputManager::GetId()
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
	if (patronymic.empty())
		patronymic = "";

	std::cout << "Enter MobilePhone: ";
	std::getline(std::cin, mobilePhone);
	if (mobilePhone.empty())
		mobilePhone = "";

	std::cout << "Enter BirthDay: ";
	std::getline(std::cin, birthDay);
	if (birthDay.empty())
		birthDay = "";


	Person person(name, surname, patronymic, mobilePhone, birthDay);
	return person;
}
