#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int left, right;
    left = n/2;
    if (n%2 == 0) {
        right = n/2 + 1;
    } else {
        right = n/2;
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1 || i == left || i == right) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        if ()
        cout << endl;
    }
    
    return 0;
}