#include "PersonSaver.h"

PersonSaver::PersonSaver(std::string path)
{
	fout.open(path);
	isOpen = fout.is_open();
	if (!isOpen)
	{
		std::cout << "File not open!" << std::endl;
	}
}

PersonSaver::~PersonSaver()
{
	if (isOpen) fout.close();
}

void PersonSaver::Write(const std::vector<Person>& person)
{
    for (size_t i = 0; i < person.size(); i++)
    {
        std::string patronymic = person[i].GetPatronymic();
        std::string mobilePhone = person[i].GetMobilePhone();
        std::string birthDay = person[i].GetBirthDay();

        fout << person[i].GetId() << " "
            << person[i].GetName() << " "
            << person[i].GetSurname() << " "
            << (patronymic.empty() ? "-" : patronymic) << " "
            << (mobilePhone.empty() ? "-" : mobilePhone) << " "
            << (birthDay.empty() ? "-" : birthDay) << std::endl;
    }
}
