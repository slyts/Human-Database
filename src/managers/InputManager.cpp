#include "InputManager.h"

std::string InputManager::EnterName()
{
	std::string name = GetString("Enter Name: ", false, true);
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

	name = GetString("Enter Name: ", false, true);
	surname = GetString("Enter Surname: ", false, true);
	patronymic = GetString("Enter Patronymic: ", true, true);
	mobilePhone = GetString("Enter Mobile Phone: ", true, false);
	birthDay = GetString("Enter BirthDay: ", true, false);

	Person person(name, surname, patronymic, mobilePhone, birthDay);
	return person;
}

std::string InputManager::GetString(const std::string & inputText, bool isCanEmpty, bool isFormat)
{
	std::string str;
	if (isCanEmpty)
	{
		std::cout << inputText;
		std::getline(std::cin, str);
	}
	else
	{
		while (str.empty())
		{
			std::cout << inputText;
			std::getline(std::cin, str);
		}
	}

	if (isFormat && !str.empty())
	{
		str[0] = std::toupper(str[0]);
		for (size_t i = 1; i < str.size(); i++)
		{
			str[i] = std::tolower(str[i]);
		}
	}
	return str;
}
