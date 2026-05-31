#pragma once

#include "IdGenerator.h"
#include <string>

class Person
{
private:
	int id;

	std::string name;
	std::string surname;
	std::string patronymic;

	std::string mobilePhone;

	std::string birthDay;
public:
	Person(std::string name, std::string surname, std::string patronymic, std::string mobilePhone, std::string birthDay);
	Person(std::string name, std::string surname);
	Person(std::string name, std::string surname, std::string patronymic);
	Person(std::string name, std::string surname, std::string patronymic, std::string birthDay);

	int GetId() const;
	std::string GetName() const;
	std::string GetSurname() const;
	std::string GetPatronymic() const;
	std::string GetMobilePhone() const;
	std::string GetBirthDay() const;
};
