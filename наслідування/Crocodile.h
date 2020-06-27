#pragma once
#include <iostream>
#include <string>
#include "Reptile.h"
using namespace std;
class Crocodile : public Reptile
{
public:
	Crocodile() : Reptile() {}
	Crocodile(int number_of_paws, bool danger_to_people, string species, float speed, float weight, string habitat) : Reptile(number_of_paws, danger_to_people, species, speed, weight, habitat) {}
	void Show()const
	{
		Reptile::Show();
	}
	void Move()const
	{
		Reptile::Move();
	}
	void Say()const
	{
		Reptile::Say();
	}
	~Crocodile() {}
};
