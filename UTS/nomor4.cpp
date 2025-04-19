#include <iostream>
#include <string>
using namespace std;

int main() {
    string title_list;
    int count = 0;
    bool is_title = false;

    cout << "Masukkan daftar judul buku: "; getline(cin, title_list);

    int i = 0;
    while (i < title_list.length())
    {
        if (title_list[i] != ' ')
        {
            if (!is_title)
            {
                count++;
                is_title = true;
            }
        }
        else
        {
            is_title = false;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << count << endl;
}