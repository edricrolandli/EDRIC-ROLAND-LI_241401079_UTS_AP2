#include <iostream>
using namespace std;

int main() {
    int code_1, code_2, code_3;

    cout << "kode ke-1 : "; cin >> code_1;
    cout << "kode ke-2 : "; cin >> code_2;
    cout << "kode ke-3 : "; cin >> code_3;

    if (code_1 < 50 || code_2 < 50 || code_3 < 50) 
	{
        cout << "Bahaya" << endl;
    } 
	else if (code_1 + code_2 + code_3 >= 200) 
	{
        cout << "Aman" << endl;
    } 
	else 
	{
        cout << "Bahaya" << endl;
    }
}