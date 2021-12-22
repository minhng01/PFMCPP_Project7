#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 5) { }
    void use(Character*) override;
};