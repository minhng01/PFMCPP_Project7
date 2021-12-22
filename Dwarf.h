#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hitPoints_, int armor_);
    
private:
    const std::string name;
};
