// C++ program to swap two numbers using arithmetic operators presedence:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3, b = 5;

    cout << "Before swapping a = " << a << " , b = " << b << endl;

    b = a - b + (a = b);

    cout << "After swapping a = " << a << " , b = " << b << endl;
    return 0;
}
