// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace
using complex_float = complex<float>;

float delta(float& a, float& b, float& c)
{
    return b*b - 4*a*c;
}

void print_ans(complex_float x1, complex_float x2)
{

 	cout << "The answer is: " << x1 << "or " << x2<< endl;
	cout << "Or in a more familiar form: " << x1.real()
			<< " + " << x1.imag() << "j" << " or " << x2.real()
             << x2.imag() << "j"
			<< endl	<< endl;
}

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
	return 0;
}

