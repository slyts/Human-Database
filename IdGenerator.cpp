#include "IdGenerator.h"

int IdGenerator::GenerateId() { return ++id; }

int IdGenerator::GetCurrentId()
{
    return id;
}

void IdGenerator::SetId(int value)
{
    if (value > id) id = value;
}


int IdGenerator::id = 0;
