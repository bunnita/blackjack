#pragma once
class Cards
{
public:
	Cards();
	Cards(int, int);
	virtual ~Cards();
private:
	int value;
	int suit;
public:
	int getValue();
	void setValue(int value);
};

