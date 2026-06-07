#pragma once

#include <vector>
#include "Person.h"
#include "Display.h"
#include "InputManager.h"
#include "PersonSaver.h"
#include "PersonReader.h"

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
