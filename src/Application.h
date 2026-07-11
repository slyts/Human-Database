#pragma once

#include <vector>
#include "person/Person.h"
#include "managers/Display.h"
#include "managers/InputManager.h"
#include "person/PersonSaver.h"
#include "person/PersonReader.h"

class Application
{
private:
	std::vector<Person> persons;
	bool isRunning;

	void ClearScreen();
	void HandleChoice(int choice);
	void AddPerson();
	void ShowPersonTable();
	void DeleteById();
	void FindByName();
	void Save() const;
	void Read();

public:
	Application();
	void Run();
};
