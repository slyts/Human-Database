#pragma once

#include "Person.h"
#include <fstream>
#include <vector>
#include <iostream>

class PersonSaver
{
private:
	std::ofstream fout;
	bool isOpen;

public:
	PersonSaver(std::string path);
	~PersonSaver();
	void Write(const std::vector<Person>& person);
};