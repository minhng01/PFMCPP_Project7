#include "Paladin.h"

Paladin::Paladin(std::string name_, int hitPoints_, int armor_)
        : Character(hitPoints_, armor_, 10),
          name(name_)          
{

}

// Paladin::getName

// Paladin::getStats