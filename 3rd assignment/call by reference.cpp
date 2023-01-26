// C++ program to swap two numbers using call by reference or pointer
#include<bits/stdc++.h>
using namespace std;

// Function definition, which will swap two numbers using call by Reference or pointer
void Swap_function(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	int a = 5, b = 6;

	cout << "Before swapping a = " << a << " , b = " << b << endl;

	// Function call
	Swap_function(&a, &b);

	cout << "After swapping a = " << a << " , b = " << b << endl;

	return 0;
}
