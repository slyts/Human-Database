#pragma once

class IdGenerator
{
private:
	static int id;

public:
	static int GenerateId();
	static int GetCurrentId();
	static void SetId(int value);
};
