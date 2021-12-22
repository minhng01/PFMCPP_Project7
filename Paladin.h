#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string name_, int hitPoints_, int armor_);

private:
    const std::string name;
};
