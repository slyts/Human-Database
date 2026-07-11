#pragma once

#include "../person/Person.h"
#include <iostream>
#include <string>

class InputManager
{
private:
	static std::string GetString(const std::string& inputText, bool isCanEmpty, bool isFormat);
public:
	static int EnterId();
	static int GetChoice();
	static Person EnterPerson();
	static std::string EnterName();
};
