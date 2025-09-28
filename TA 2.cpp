#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int harga;
};

void bubbleSort(Barang arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].harga > arr[j + 1].harga) {
                // Tukar posisi
                Barang temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void tampilkan(Barang arr[], int n) {
    cout << "\nDaftar Barang Setelah Diurutkan (Termurah -> Termahal):\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << arr[i].nama << " - Rp" << arr[i].harga << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    Barang daftar[n];

    for (int i = 0; i < n; i++) {
        cout << "\nMasukkan nama barang ke-" << i + 1 << ": ";
        cin.ignore(); // untuk membersihkan buffer
        getline(cin, daftar[i].nama);
        cout << "Masukkan harga " << daftar[i].nama << ": Rp";
        cin >> daftar[i].harga;
    }

    bubbleSort(daftar, n);

    tampilkan(daftar, n);

    return 0;
}