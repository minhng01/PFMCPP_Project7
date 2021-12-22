#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon(std::string name_, int hitPoints_, int armor_) 
        : Character(hitPoints_, armor_, 80),
          name(name_)
{

}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats