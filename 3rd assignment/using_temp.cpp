// C++ program to swap two using temp variable


#include<bits/stdc++.h>
using namespace std;


int main()
{
	//int x = 5, y = 6;
	string x = "Sunny", y = "Somik";

	cout << "Before swapping x = " << x << " and y = " << y << endl;

	string temp;
	temp = x;
	x = y;
	y = temp;

	cout << "After swapping x = " << x  << " and y = " << y << endl;
	return 0;
}
