#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Reptile : public Animal
{
protected:
	int number_of_paws;
	bool danger_to_people;
	bool checkKorect(int check)
	{
		return check > 0;
	}
public:
	Reptile() : number_of_paws(0), danger_to_people(0), Animal() {}
	Reptile(int number_of_paws, bool danger_to_people, string species, float speed, float weight, string habitat) : number_of_paws(number_of_paws), danger_to_people(danger_to_people), Animal(species, speed, weight, habitat) 
	{
		if (checkKorect(number_of_paws) == false)
		{
			this->number_of_paws = 0;
		}
	}
	void Move()const
	{
		Animal::Move();
		cout << "crawling" << endl;
	}
	void Say()const
	{
		Animal::Say();
		cout << "YOU SHEL NOT PASS!!!" << endl;
	}
	void Show()const
	{
		Animal::Show();
		cout << "Tumber of paws: " << number_of_paws << endl;
		cout << "Banger to people: " ;
		if (danger_to_people == 1)
		{
			cout << "yes" << endl;
		}
		else if (danger_to_people == 0)
		{
			cout << "no" << endl;
		}
	}

	~Reptile()
	{

	}
};

