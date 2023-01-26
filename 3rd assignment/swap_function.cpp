// C++ program to swap two variable or numbers using built in function:

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//int a = 5, b = 6;
	string a = "Sunny", b = "Funny";

	cout << "Before swapping a = " << a << " , b = " << b << endl;

	// Built-in function
	swap(a, b);
	cout << "After swapping a = " << a << " , b = " << b << endl;

	return 0;
}
