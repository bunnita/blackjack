#pragma once
#include "Cards.h"
#include <vector>
class Deck :
	public Cards
{
public:
	Deck();
	Deck(int);
	virtual ~Deck();
private:
	std::vector<Cards> DeckOfCards;
public:
	//shuffles the deck
	void shuffleDeck();
};

