#include <iostream>
using namespace std;

int main() {
    int code;

    cout << "Masukkan kode 3 digit: "; cin >> code;

    if (code < 100 || code > 999)
    {
        cout << "Kode Salah!" << endl;
    }
    else
    {
        int digit1 = code / 100;
        int digit2 = (code / 10) % 10;
        int digit3 = code % 10;

        int jumlah = digit1 + digit2 + digit3;

        cout << "Jumlah digit: " << jumlah << endl;
    }
}