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
    cout << endl;
	auto myScreen1 = Screen{6,6};
	myScreen1.Square(2,2,4);
	myScreen1.display();
	return 0;
}

