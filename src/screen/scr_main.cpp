// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear('*');
	myScreen.move(Direction::DOWN);
	myScreen.move(Direction::FORWARD);
	myScreen.set("     ");
	myScreen.move(Direction::HOME);
	myScreen.move(Direction::DOWN);
	myScreen.move(Direction::DOWN);
	myScreen.move(Direction::FORWARD);
	myScreen.set("     ");
    myScreen.move(5,1);
	myScreen.set("     ");
	myScreen.display();

	return 0;
}

