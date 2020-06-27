#include <iostream>
#include <string>
#include "Animal.h"
#include "Bird.h"
#include "Hummingbird.h"
#include "Reptile.h"
#include "Crocodile.h"
#include "Fish.h"
#include "Crucian.h"
using namespace std;

int main()
{

	Hummingbird hu1(100,50,"ne eby", 150000,5,"neeeeet");
	hu1.Show();
	hu1.Say();
	hu1.Move();

	system("pause");
	return 0;
}