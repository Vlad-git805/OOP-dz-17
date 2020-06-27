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

	Hummingbird hu1(-10,-150,"ne eby", -111,-5,"neeeeet");
	hu1.Show();
	hu1.Say();
	hu1.Move();

	cout << endl;
	Crocodile cr1(4,1,"--",40,100,"--");
	cr1.Show();
	cr1.Say();
	cr1.Move();

	system("pause");
	return 0;
}