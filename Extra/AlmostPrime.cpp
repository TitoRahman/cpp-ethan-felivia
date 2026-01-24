#include <iostream>

using namespace std;


int countPrimeFactors(int n) {
    // Berapa banyak kondisi == 2
    int count = 0;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) { // cek apakah nilai bukan prima?
            count++;
            while (n % p == 0) n /= p; // 8 -> /2 -> 4 /2 -> 2 /2 -> 0 
        }
    }
    if (n > 1) count++;
    return count;
}

int main() {
 
    int inp;
    cin >> inp;
    int count_ap = 0;

    for (size_t i = 2; i <=  inp; i++)
    {
        if (countPrimeFactors(i) == 2) {
            count_ap++;
        }
    }
    
    cout << count_ap;
    return 0;
}