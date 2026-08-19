#include "Item.h"

// =====================================
// CONSTRUCTOR
// =====================================

Item::Item(
    std::string itemName,
    char itemSymbol,
    int itemPrice,
    ItemCategory itemCategory,
    ItemTier itemTier)
{
    name = itemName;

    symbol = itemSymbol;

    price = itemPrice;

    category = itemCategory;

    tier = itemTier;
}

// =====================================
// DESTRUCTOR
// =====================================

Item::~Item()
{
}

// =====================================
// GETTERS
// =====================================

std::string Item::getName()
{
    return name;
}

char Item::getSymbol()
{
    return symbol;
}

int Item::getPrice()
{
    return price;
}

ItemCategory Item::getCategory()
{
    return category;
}

ItemTier Item::getTier()
{
    return tier;
}