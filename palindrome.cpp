#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, rev, sum = 0;
    
    cin >> n;
    temp = n;
    
    while (n>0){
        rev = n % 10;
        sum = (sum * 10) + rev;
        n = n/10;
    }
    
    if (temp == sum) {
        cout << "palindrome Number";
    } else {
        cout << "not plainddrome";
    }

    return 0;
}
