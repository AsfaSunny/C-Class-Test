#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, product, result = 0;

    cout << "Enter the max number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        product = i * (i+1);

        result = result + product;

        cout << i << "*" << i+1 << endl;
    }

    cout << endl << "Total = " << result << endl;
    return 0;
}
