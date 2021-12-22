#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string name_, int hitPoints_, int armor_)
        : Character(hitPoints_, armor_, 10),
          name(name_)          
{
    makeHelpfulItems(3);
    makeDefensiveItems(2);
}

// Paladin::getName

// Paladin::getStats