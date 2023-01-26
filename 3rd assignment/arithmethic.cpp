// C++ program to swap two variables using * and /


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 80, b = 71;

    cout << "Before swapping a = " << a << " , b = " << b << endl;

    b = a * b;
    a = b / a;
    b = b / a;

    cout << "After swapping a = " << a << " , b = " << b << endl;

    return 0;
}
