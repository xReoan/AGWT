#pragma once
#include "Card.h"
class CardDeck
{
public:
	CardDeck();
	void addcard(Card* card);
	Card* getcard(int index);
private:
	Card* cards[50];
	int cardcount;
};

