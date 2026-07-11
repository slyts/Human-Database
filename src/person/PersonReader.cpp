#include "PersonReader.h"
#include "../utils/IdGenerator.h"

PersonReader::PersonReader(std::string path)
{
	fin.open(path);
	isOpen = fin.is_open();
	if (!isOpen)
	{
		std::cout << "File not open!" << std::endl;
	}
}

PersonReader::~PersonReader()
{
	if (isOpen) fin.close();
}

std::vector<Person> PersonReader::Read()
{
	std::vector<Person> humansOutFile;

	int id;
	std::string name;
	std::string surname;
	std::string patronymic;
	std::string mobilePhone;
	std::string birthDay;

	while (fin >> id >> name >> surname >> patronymic >> mobilePhone >> birthDay)
	{
		if (patronymic == "-") patronymic = "";
		if (mobilePhone == "-") mobilePhone = "";
		if (birthDay == "-") birthDay = "";

		Person person(name, surname, patronymic, mobilePhone, birthDay);
		humansOutFile.push_back(person);
		IdGenerator::SetId(id);
	}

	return humansOutFile;
}