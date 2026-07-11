#include "Display.h"

void Display::ShowMenu()
{
	std::cout << "===== DATABASE =====\n"
		<< "1. Add Human\n"
		<< "2. Show all\n"
		<< "3. Find by name\n"
		<< "4. Delete by ID\n"
		<< "5. Exit\n"
		<< "====================\n"
		<< "Choice: ";
}

void Display::ShowTable(const std::vector<Person>& persons)
{
	std::cout << "\n" << std::string(92, '-') << "\n";
	std::cout << "| ID  |     Name     |     Surname     |     Patronymic     |  BirthDay  |   MobilePhone   |\n";
	std::cout << std::string(92, '-') << "\n";

	for (size_t i = 0; i < persons.size(); i++)
	{

		std::cout << "| " << std::left << std::setw(4) << persons[i].GetId() << "| "
			<< std::left << std::setw(13) << persons[i].GetName() << "| "
			<< std::left << std::setw(16) << persons[i].GetSurname() << "| "
			<< std::left << std::setw(19) << persons[i].GetPatronymic() << "| "
			<< std::left << std::setw(11) << persons[i].GetBirthDay() << "| "
			<< std::left << std::setw(16) << persons[i].GetMobilePhone() << "| " << std::endl;

	}
	std::cout << std::string(92, '-') << "\n";
}
