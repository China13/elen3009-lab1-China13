// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace
using complex_float = complex<float>;
<<<<<<< HEAD
int main()
{
	auto num1 = complex_float{2.0, 2.0};  // use auto for type deduction
	auto num2 = complex_float{4.0, -2.0}; // use uniform initialisation syntax (curly braces)
=======

float delta(float& a, float& b, float& c)
{
    return b*b - 4*a*c;
}
>>>>>>> section-3

void print_ans(complex_float x1, complex_float x2)
{

<<<<<<< HEAD
	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real()
			<< " + " << answer.imag() << "j"
=======
 	cout << "The answer is: " << x1 << "or " << x2<< endl;
	cout << "Or in a more familiar form: " << x1.real()
			<< " + " << x1.imag() << "j" << " or " << x2.real()
             << x2.imag() << "j"
>>>>>>> section-3
			<< endl	<< endl;
}

<<<<<<< HEAD
	 //answer++;
    //operator++ is an increament operator for traditional data types, for int to be exact, in order for the
    //operator++ to work on answer, it needs to be overloaded.
=======
int main()
{
    float a, b, c;
    char char_;
    complex_float x1, x2;

    while(char_ != 'q')
    {
    cout << "Want to calculate Yes/Quit (y/q)?" << endl;
    cin >> char_;
    if(char_ == 'q')
        return 0;
    cout << "Please in put value a, b, c in this order:" << endl;
    cin >> a >> b >> c;

    auto delta_ = delta(a, b, c);

    x1 = (-b + sqrt((complex_float)delta_))/(2*a);
    x2 = (-b - sqrt((complex_float)delta_))/(2*a);

    print_ans(x1, x2);
    cout << endl;
    }
>>>>>>> section-3
	return 0;
}

