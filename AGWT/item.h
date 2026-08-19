#pragma once

#include <string>

// =====================================
// ITEM CATEGORY
// =====================================

enum ItemCategory
{
    MELEE,
    PROJECTILE,
    ARMOR
};

// =====================================
// ITEM TIER
// =====================================

enum ItemTier
{
    BASIC,
    ADVANCED
};

// =====================================
// ITEM CLASS
// =====================================

class Item
{
private:

    // Full item name.
    std::string name;

    // One character displayed inside
    // the Inventory slot.
    char symbol;

    // Price in coins.
    int price;

    // Melee / Projectile / Armor.
    ItemCategory category;

    // Basic / Advanced.
    ItemTier tier;

public:

    Item(
        std::string itemName,
        char itemSymbol,
        int itemPrice,
        ItemCategory itemCategory,
        ItemTier itemTier);

    ~Item();

    // Getters.
    std::string getName();

    char getSymbol();

    int getPrice();

    ItemCategory getCategory();

    ItemTier getTier();
};