#pragma once

#include "Person.h"
#include <iostream>
#include <string>

class InputManager
{
public:
	static int EnterId();
	static int GetChoice();
	static std::string EnterName();
	static Person EnterPerson();
};
