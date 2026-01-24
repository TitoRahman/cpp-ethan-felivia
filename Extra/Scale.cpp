#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (size_t l = 0; l < t; l++)
    {
        int n, k;
        cin >> n >> k;

        string grid[n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        for (size_t i = 0; i < n; i += k)
        {
            for (size_t j = 0; j < n; j += k)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    
    
    

    return 0;
}