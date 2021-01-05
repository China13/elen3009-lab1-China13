// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear('*');
	myScreen.move(2,2);
	myScreen.set("     ");
	myScreen.move(3,2);
	myScreen.set("     ");
    myScreen.move(5,1);
	myScreen.set("     ");
	myScreen.display();

	return 0;
}

