#include "IdGenerator.h"

int IdGenerator::GenerateId() { return ++id; }

int IdGenerator::id = 0;
