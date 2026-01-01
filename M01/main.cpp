#include <iostream> // Input Output Stream
#include <string>
#include <math.h>

using namespace std;

int main() {

    // // Variable - tempat penampung nilai sesuai tipe data
    // // 1. No space
    // // 2. No symbol (exclude _)
    // // 3. Angka tidak boleh di depan
    
    // // String ("...") - Character ('...') 
    // // short - Integer (4jt angka) - Long (16 jt) - Long Long (64jt)
    // // Boolean 
    // // Float - Double

    // // Creating string variable
    // string nama = "Maju"; 
    // char nama2[] = "Darren";
    // string jk = {'l', 'p'};

    // // Creating Character variable
    // char jenis_kelamin = 'L'; 
    
    // // Int variable
    // int num1;
    // int num2;

    // num1 = 2;
    // num2 = 10;

    // int num3, num4;
    // num3 = 5;
    // num4 = 7;

    // int num5 = 10, num6 = 15;

    // long a = 10000;

    // // Float
    // float b = 1.1f;
    // double c = 1.2;

    // // Boolean
    // bool z = true;

    // int total = num5 ^ num6;

    // cout << z;
    // // CIN - Console Input

    // cin >> nama;
    // getline(cin, nama);

    // // COUT - Console Output
    // cout << "Marvel\n";
    // cout << "JOHN" << endl;
    // cout << "Budi" << endl;


    string nama;

    getline(cin, nama);

    cout << "Hello, " << nama << "!" << endl;

    int a,b,c, d;

    cin >> a >> b >> c;
    cin >> d;
    cout << a + b + c + d<< endl;
    return 0;
}

