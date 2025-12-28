#include "perfect_number.h"

BilanganSempurna cekSempurnaRekursif(int bilangan) {
    BilanganSempurna hasil;
    hasil.bilangan = bilangan;
    hasil.jumlahFaktor = 0;
    hasil.jumlahOperasi = 0;

    bantuRekursif(bilangan, 1, hasil);

    hasil.statusSempurna = (hasil.jumlahFaktor == bilangan);
    return hasil;
}

void bantuRekursif(int bilangan, int pembagi, BilanganSempurna &hasil) {
    if (pembagi > bilangan / 2) {
        return;
    }

    hasil.jumlahOperasi++; // operasi pembandingan

    if (bilangan % pembagi == 0) {
        hasil.jumlahFaktor += pembagi;
    }

    bantuRekursif(bilangan, pembagi + 1, hasil);
}
