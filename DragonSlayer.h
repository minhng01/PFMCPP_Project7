#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hitPoints_, int armor_);
    
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
    
    std::unique_ptr<AttackItem> attackItem;

private:
    const std::string name;
};
