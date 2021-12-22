#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name_, int hitPoints_, int armor_) 
        : Character(hitPoints_, armor_, 4),
          name(name_)
{
    makeHelpfulItems(1);
    makeDefensiveItems(2);
}

//Dwarf::getName

//Dwarf::getStats