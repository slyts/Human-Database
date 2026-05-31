#pragma once

#include <vector>
#include "Person.h"
#include "Display.h"
#include "InputManager.h"

class Application
{
private:
	std::vector<Person> persons;
	bool isRunning;

	void ClearScreen();
	void ShowMenu();
	void HandleChoice(int choice);
	void AddPerson();
	void ShowPersonTable();
	void DeleteById();

public:
	Application();
	void Run();
};
