#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int b[n]; // {0,0,0,0,0,0,0}
        for (size_t j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        int start = 0, end = n - 1;
        int new_b[n];

        for (size_t j = 0; j < n; j++)
        {
            if ((j+1)%2 == 1) {
                new_b[j] = b[start];
                start++;
            } else {
                new_b[j] = b[end];
                end--; 
            }
        }    
        
        // 0 6 1 5 2 4 3
        
        for (size_t j = 0; j < n; j++)
        {
            cout << new_b[j] <<" ";
        }
    }
    

    return 0;
}