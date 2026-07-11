#pragma once

#include <fstream>
#include <vector>
#include <iostream>

#include "Person.h"

class PersonReader
{
private:
	std::ifstream fin;
	bool isOpen;

public:
	PersonReader(std::string path);

	~PersonReader();

	std::vector<Person> Read();
};