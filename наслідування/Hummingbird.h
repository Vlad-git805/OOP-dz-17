#pragma once
#include <iostream>
#include <string>
#include "Bird.h"
using namespace std;
class Hummingbird : public Bird
{
public:
	Hummingbird() : Bird() {}
	Hummingbird(float flight_altitude, float wingspan, string species, float speed, float weight, string habitat) : Bird(flight_altitude, wingspan, species, speed, weight, habitat) {}
	void Show()const
	{
		Bird::Show();
	}
	void Move()const
	{
		Bird::Move();
	}
	void Say()const
	{
		Bird::Say();
	}
	~Hummingbird() {}
};

