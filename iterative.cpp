#include "perfect_number.h"

BilanganSempurna cekSempurnaIteratif(int bilangan) {
    BilanganSempurna hasil;
    hasil.bilangan = bilangan;
    hasil.jumlahFaktor = 0;
    hasil.jumlahOperasi = 0;

    for (int pembagi = 1; pembagi <= bilangan / 2; pembagi++) {
        hasil.jumlahOperasi++; // operasi pembandingan
        if (bilangan % pembagi == 0) {
            hasil.jumlahFaktor += pembagi;
        }
    }

    hasil.statusSempurna = (hasil.jumlahFaktor == bilangan);
    return hasil;
}
