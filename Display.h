#pragma once

#include "Person.h"
#include <iostream>
#include <vector>
#include <iomanip>

class Display
{
public:
	static void ShowMenu();
	static void ShowTable(const std::vector<Person>& persons);
};