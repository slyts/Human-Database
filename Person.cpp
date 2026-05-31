#include "Person.h"

Person::Person(std::string name, std::string surname, std::string patronymic, std::string mobilePhone, std::string birthDay)
	: name(name), surname(surname), patronymic(patronymic), mobilePhone(mobilePhone), birthDay(birthDay), id(IdGenerator::GenerateId())
{}

Person::Person(std::string name, std::string surname)
	: Person(name, surname, "", "", "")
{}

Person::Person(std::string name, std::string surname, std::string patronymic)
	: Person(name, surname, patronymic, "", "")
{}

Person::Person(std::string name, std::string surname, std::string patronymic, std::string birthDay)
	: Person(name, surname, patronymic, "", birthDay)
{}

int Person::GetId() const { return id; }
std::string Person::GetName() const { return name; }
std::string Person::GetSurname() const { return surname; }
std::string Person::GetPatronymic() const { return patronymic; }
std::string Person::GetMobilePhone() const { return mobilePhone; }
std::string Person::GetBirthDay() const { return birthDay; }
