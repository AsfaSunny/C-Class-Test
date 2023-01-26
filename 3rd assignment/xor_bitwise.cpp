// C++ program to swap two numbers using Bitwise Operator.
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a = 5, b = 3;

	cout << "Before swapping a = " <<
			a << " , b = " << b << endl;

	a = a ^ b;
	b = b ^ a; // b = b ^ (a ^ b) = a
	a = a ^ b; // a = (a ^ b) ^ a = b

	cout << "After swapping a = " <<
			a << " , b = " << b << endl;
	return 0;
}
