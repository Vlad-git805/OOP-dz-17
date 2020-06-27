#pragma once
#include <iostream>
#include <string>
#include "Fish.h"
using namespace std;
class Crucian : public Fish
{
public:
	Crucian() : Fish() {}
	Crucian(float maximum_depth_of_immersion, int number_of_fins, string species, float speed, float weight, string habitat) : Fish(maximum_depth_of_immersion, number_of_fins, species, speed, weight, habitat) {}
	void Show()const
	{
		Fish::Show();
	}
	void Move()const
	{
		Fish::Move();
	}
	void Say()const
	{
		Fish::Say();
	}
	~Crucian() {}
};
