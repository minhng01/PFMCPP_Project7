#pragma once

#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hitPoints_, int armor_);
    
    void attack(Character& other) override;
private:
    const std::string name;
};
