#include <iostream>
#include <chrono>
#include <iomanip>
#include "perfect_number.h"

using namespace std;
using namespace std::chrono;

int main(){
    int bilangan;

    cout << fixed << setprecision(6);

    cout << "------------ Selamat Datang! ------------" << endl << endl;
    cout << "====================================" << endl;
    cout << "Program Pengecekan Bilangan Sempurna" << endl;
    cout << "====================================" << endl << endl;
    cout << "- Silahkan masukkan bilangan bulat yang akan dicek" << endl;
    cout << "- Masukkan angka 0 untuk mengakhiri program" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    while (true) {
        cout << "Masukkan angka: ";
        cin >> bilangan;
        cout << endl;

        if (bilangan == 0) {
            cout << "--------------- Program Berakhir, Terima Kasih ---------------------------" << endl;
            break;
        }

        const int ULANGAN = 100000; // hanya untuk mengukur waktu

        // ================= ITERATIF =================
        cout << "=== Pendekatan Iteratif ===" << endl;

        auto startIteratif = high_resolution_clock::now();
        BilanganSempurna hasilIteratif;

        for (int i = 0; i < ULANGAN; i++) {
            hasilIteratif = cekSempurnaIteratif(bilangan);
        }

        auto endIteratif = high_resolution_clock::now();
        duration<double> durasiIteratif = endIteratif - startIteratif;

        cout << "Jumlah faktor   : " << hasilIteratif.jumlahFaktor << endl;
        cout << "Jumlah operasi  : " << hasilIteratif.jumlahOperasi << endl;
        cout << "Execution time  : " << durasiIteratif.count() << " s" << endl;
        cout << "Status bilangan : "
             << (hasilIteratif.statusSempurna ? "Bilangan Sempurna" : "Bukan Bilangan Sempurna")
             << endl << endl;

        // ================= REKURSIF =================
        cout << "=== Pendekatan Rekursif ===" << endl;

        auto startRekursif = high_resolution_clock::now();
        BilanganSempurna hasilRekursif;

        for (int i = 0; i < ULANGAN; i++) {
            hasilRekursif = cekSempurnaRekursif(bilangan);
        }

        auto endRekursif = high_resolution_clock::now();
        duration<double> durasiRekursif = endRekursif - startRekursif;

        cout << "Jumlah faktor   : " << hasilRekursif.jumlahFaktor << endl;
        cout << "Jumlah operasi  : " << hasilRekursif.jumlahOperasi << endl;
        cout << "Execution time  : " << durasiRekursif.count() << " s" << endl;
        cout << "Status bilangan : "
             << (hasilRekursif.statusSempurna ? "Bilangan Sempurna" : "Bukan Bilangan Sempurna")
             << endl << endl;

        cout << "==================================================" << endl;
        cout << "- Silahkan masukkan bilangan bulat yang akan dicek" << endl;
        cout << "- Masukkan angka 0 untuk mengakhiri program" << endl;
        cout << "==================================================" << endl << endl;
    }

    return 0;
}
