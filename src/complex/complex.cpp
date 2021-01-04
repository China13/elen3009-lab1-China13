// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace
using complex_float = complex<float>;
int main()
{
	auto num1 = complex_float{2.0, 2.0};  // use auto for type deduction
	auto num2 = complex_float{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real()
			<< " + " << answer.imag() << "j"
			<< endl	<< endl;

	 //answer++;
    //operator++ is an increament operator for traditional data types, for int to be exact, in order for the
    //operator++ to work on answer, it needs to be overloaded.
	return 0;
}

