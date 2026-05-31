#pragma once

#include "Person.h"
#include <iostream>

class InputManager
{
public:
	static int GetId();
	static int GetChoice();
	static Person EnterPerson();
};
