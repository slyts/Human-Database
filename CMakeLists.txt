cmake_minimum_required (VERSION 3.21)

project (HumanBase)

add_executable(app 
	Main.cpp 
	Application.cpp 
	Display.cpp 
	IdGenerator.cpp 
	InputManager.cpp 
	Person.cpp 
	PersonReader.cpp 
	PersonSaver.cpp

	Application.h  
	Display.h  
	IdGenerator.h 
	InputManager.h 
	Person.h  
	PersonReader.h 
	PersonSaver.h 
)