//functTemplatesex.cpp
//Kyle Thomas
//16 Sept.2017

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T> //Typname can be replaced w/ class
T sum(T num1, T num2) 
{
	T result;
	result = num1 + num2;
	return result;
}

int main()
{
	int int1, int2;
	float flt1, flt2;
	double dbl1, dbl2;

	cout << "Demo of sum templated function" << endl << endl;
	cout << "Enter two integers\ninteger1:   ";
	cin >> int1;
	cout << "integer2:   ";
	cin >> int2;

	cout << "The sum is " << sum(int1, int2) << endl << endl;

	cout << "Enter two floats\nfloat1:   ";
	cin >> flt1;
	cout << "float2:   ";
	cin >> flt2;

	cout << "The sum is " << sum(flt1, flt2) << endl << endl;

	cout << "Enter two doubles\ndouble1:   ";
	cin >> dbl1;
	cout << "double2:   ";
	cin >> dbl2;

	cout << "The sum is " << sum(dbl1, dbl2) << endl << endl;
}

// Function templates can also be paired with constraints (not shown here)
//which can specify requirements on template arguments.