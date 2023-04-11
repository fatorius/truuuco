#include <iostream>

#include "bits.h"

using namespace std;

int fullMascara;
int mascaras[TOTAL_DE_CARTAS];
int not_mascaras[TOTAL_DE_CARTAS];

void initMascaras(){
    for (int i = 0; i < TOTAL_DE_CARTAS; i++){
        mascaras[i] = (1 << i);
        not_mascaras[i] = ~mascaras[i];
        fullMascara |= (1 << i);
    }
}


void setBit(int &num, int pos){
    num |= mascaras[pos];
}

void setBitFalse(int &num, int pos){
    num &= mascaras[pos];
}