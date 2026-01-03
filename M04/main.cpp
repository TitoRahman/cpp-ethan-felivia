#include <iostream>

using namespace std;

int main() {
    // COLLECTION - VARIABLE YANG MENYIMPAN LEBIH DARI 1 NILAI
    // ARRAY - BANYAK NIALI FIX
    // VECTOR - BANYAK NILAI BEBAS/FLEXIBLE

    // <DATA TYPE> <VAR NAME>[] = {<VALUES>}
    // INDEX - LETAK NILAI
    // string list_nama[] = {"Marvel", "John", "Pris"};

    // list_nama[0] = "MARVEL CHUANDY";
    // list_nama[1] = "";

    // int list_nilai[10];

    // list_nilai[0] = 100;
    // list_nilai[9] = 67;

    // for (size_t index = 0; index < 3; index++)
    // {
    //     cout << list_nama[index] << endl;
    // }
    
    // for (size_t i = 0; i < 10; i++)
    // {
    //     cout << list_nilai[i] << endl;
    // }
    

    int n;
    cin >> n;

    int scores[n];

    for (size_t i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        scores[i] = inp;

        // cin >> scores[i];

    }

    for (size_t i = 0; i < n; i++)
    {
        if (scores[i] > 65) {
            cout << "PASS" << endl;
        } else {
            cout << "FAILED" << endl;
        }
    }
    
    
    // POINTER VECTOR/ARRAY

    return 0;
}