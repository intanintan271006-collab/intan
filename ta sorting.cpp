#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    int harga[100];
    cout << "Masukkan harga barang: ";
    for (int i = 0; i < n; i++) {
        cin >> harga[i];
    }

    // Proses Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = harga[i];
        int j = i - 1;

        // Geser elemen yang lebih besar dari temp ke kanan
        while (j >= 0 && harga[j] > temp) {
            harga[j + 1] = harga[j];
            j--;
        }
        // Temp ditempatkan di posisi yang sesuai
        harga[j + 1] = temp;
    }

    cout << "Harga barang setelah diurutkan (termurah - termahal): ";
    for (int i = 0; i < n; i++) {
        cout << harga[i] << " ";
    }
    cout << endl;

    return 0;
}
