#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string species;
	float speed;
	float weight;
	string habitat;
	bool checkKorect(float check)
	{
		return check > 0;
	}
public:
	Animal() : species("--"), speed(0), weight(0), habitat("--") {}
	Animal(string species, float speed, float weight, string habitat) : species(species), speed(speed), weight(weight), habitat(habitat) 
	{
		if (checkKorect(speed) == false)
		{
			this->speed = 0;
		}
		if (checkKorect(weight) == false)
		{
			this->weight = 0;
		}
	}
	void Move()const
	{
		cout << "I'm moving ";

	}
	void Show()const
	{
		cout << "Specise: " << species << endl;
		cout << "Speed: " << speed << " km./s." << endl;
		cout << "Weight: " << weight << " kg." << endl;
		cout << "Habitat: " << habitat << endl;
	}
	void Say()const
	{
		cout << "I am animal, i say ";
	}
};

