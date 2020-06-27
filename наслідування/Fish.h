#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Fish : public Animal
{
protected:
	float maximum_depth_of_immersion;
	int number_of_fins;
public:
	Fish() : maximum_depth_of_immersion(0), number_of_fins(0), Animal() {}
	Fish(float maximum_depth_of_immersion, int number_of_fins, string species, float speed, float weight, string habitat) : maximum_depth_of_immersion(maximum_depth_of_immersion), number_of_fins(number_of_fins), Animal(species, speed, weight, habitat) {}
	void Move()const
	{
		Animal::Move();
		cout << "flying" << endl;
	}
	void Say()const
	{
		Animal::Say();
		cout << "C++ ONE LOVE!!!" << endl;
	}
	void Show()const
	{
		Animal::Show();
		cout << "Maximum depth of immersion: " << maximum_depth_of_immersion << endl;
		cout << "Number of fins: " << number_of_fins << endl;
	}

	~Fish()
	{

	}
};
