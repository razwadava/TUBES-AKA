#ifndef PERFECT_NUMBER_H_INCLUDED
#define PERFECT_NUMBER_H_INCLUDED
#include <iostream>

using namespace std;

struct BilanganSempurna {
    int bilangan;
    int jumlahFaktor;
    int jumlahOperasi;
    bool statusSempurna;
};


BilanganSempurna cekSempurnaIteratif(int bilangan);
BilanganSempurna cekSempurnaRekursif(int bilangan);
void bantuRekursif(int bilangan, int pembagi, BilanganSempurna &hasil);



#endif // PERFECT_NUMBER_H_INCLUDED
