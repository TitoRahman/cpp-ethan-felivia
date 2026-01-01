#include <iostream>

using namespace std;

int main() {
    int dd, mm, yy;
    cin >> dd >> mm >> yy;

    bool isValid = false;

    if (mm >= 1 && mm <= 12) {
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            if (dd >= 1 && dd <= 31){
                isValid = true;
            }
        }
        else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) 
        {
            if (dd >= 1 && dd <= 30){
                isValid = true;
            } 
        } 
        else {
            bool isLeapYear = false;
            if (yy%400 == 0) {
                isLeapYear = true;
            } else if (yy%100 != 0 && yy%4 == 0) {
                isLeapYear = true;
            }

            if (isLeapYear && dd >= 0 && dd <= 29) {
                isValid = true;
            } else {
                isValid = false;
            }
        }
        
    }

    if (!isValid) {
        cout << dd << " " << mm << " " << yy << "Tidak Valid";
    } else {
        string mm_s = "";
        if (mm == 1) {
            mm_s = "Januari";
        } else if (mm == 2) {
            mm_s = "Februari";
        } else if (mm == 3) {
            mm_s = "Maret";
        } else if (mm == 4) {
            mm_s = "April";
        } else if (mm == 5) {
            mm_s = "Mei";
        } else if (mm == 6) {
            mm_s = "Juni";
        } else if (mm == 7) {
            mm_s = "Juli";
        } else if (mm == 8) {
            mm_s = "Agustus";
        } else if (mm == 9) {
            mm_s = "September";
        } else if (mm == 10) {
            mm_s = "Oktober";
        } else if (mm == 11) {
            mm_s = "November";
        } else if (mm == 12) {
            mm_s = "Desember";
        }

        cout << dd << " " << mm_s << " " << yy << "Tidak Valid";

    }



    return 0;
}