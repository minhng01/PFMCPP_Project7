#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string name_, int hitPoints_, int armor_)
        : Character(hitPoints_, armor_, 10),
          name(name_)          
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(3);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
