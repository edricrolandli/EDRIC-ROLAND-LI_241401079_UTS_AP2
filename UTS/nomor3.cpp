#include <iostream>
using namespace std;

int main() {
    string nama;
    string nim;
    int nilai_1, nilai_2, nilai_3;
    int total_nilai;
    float rata;

    cout << "Nama Mahasiswa: "; getline(cin, nama);
    cout << "NIM: "; getline(cin, nim);

    cout << "Nilai Mata Kuliah: " << endl;
    cout << "Algoritma dan Pemrograman: "; cin >> nilai_1;
    cout << "Probabilitas dan Statistika: "; cin >> nilai_2;
    cout << "Sistem Operasi: "; cin >> nilai_3;

    total_nilai = nilai_1 + nilai_2 + nilai_3;
    rata = total_nilai / 3.0;

    if (nilai_1 >= 60)
    {
        cout << "Algoritma dan Pemrograman: Lulus." << endl;
    }
    else
    {
        cout << "Algoritma dan Pemrograman: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilai_2 >= 60)
    {
        cout << "Probabilitas dan Statistika: Lulus." << endl;
    }
    else
    {
        cout << "Probabilitas dan Statistika: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilai_3 >= 60)
    {
        cout << "Sistem Operasi: Lulus." << endl;
    }
    else
    {
        cout << "Sistem Operasi: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    cout << "Nilai Rata-rata Semester ini: " << rata << endl;
}