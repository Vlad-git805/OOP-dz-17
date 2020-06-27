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
public:
	Animal() : species("--"), speed(0), weight(0), habitat("--") {}
	Animal(string species, float speed, float weight, string habitat) : species(species), speed(speed), weight(weight), habitat(habitat) {}
	void Move()const
	{
		cout << "I'm moving ";

	}
	void Show()const
	{
		cout << "Specise: " << species << endl;
		cout << "Speed: " << speed << endl;
		cout << "Weight: " << weight << endl;
		cout << "Habitat: " << habitat << endl;
	}
	void Say()const
	{
		cout << "I am animal, i say ";
	}
};

