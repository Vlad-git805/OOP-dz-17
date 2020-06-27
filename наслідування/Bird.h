#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Bird : public Animal
{
protected:
	float flight_altitude;
	float wingspan;
public:
	Bird() : flight_altitude(0), wingspan(0), Animal() {}
	Bird(float flight_altitude, float wingspan, string species, float speed, float weight, string habitat) : flight_altitude(flight_altitude), wingspan(wingspan), Animal(species,speed,weight,habitat) 
	{
		if (Animal::checkKorect(flight_altitude) == false)
		{
			this->flight_altitude = 0;
		}
		if (Animal::checkKorect(wingspan) == false)
		{
			this->wingspan = 0;
		}
	}
	void Move()const
	{
		Animal::Move();
		cout << "flying" << endl;
	}
	void Say()const
	{
		Animal::Say();
		cout << "bitch i'm bird!!!" << endl;
	}
	void Show()const
	{
		Animal::Show();
		cout << "Flight altitude: " << flight_altitude << " km." << endl;
		cout << "Wingspan: " << wingspan << " sm." << endl;
	}

	~Bird()
	{

	}
};

