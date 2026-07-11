#pragma once

#include "../person/Person.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

class Display
{
public:
	static void ShowMenu();
	static void ShowTable(const std::vector<Person>& persons);
};
