#include "stdafx.h"
#include "Cards.h"


Cards::Cards()
{
	value = 0;
	suit = 0;
}

Cards::Cards(int value, int suit)
{
	this->value = value;
	this->suit = suit;
}

Cards::~Cards()
{
}


int Cards::getValue()
{
	return this->value;
}


void Cards::setValue(int value)
{
	this->value = value;
}
