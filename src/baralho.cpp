#include "baralho.h"
#include "bits.h"
#include "state.h"

int fullBaralho[TOTAL_DE_CARTAS];
int baralhoAvaliable;

void initBaralho(){
    for (int c = 1; c <= TOTAL_DE_CARTAS; c++){
        fullBaralho[c] = c;
        baralhoAvaliable |= mascaras[c]; 
    }
}

void updateBaralhos(){
    baralhoAvaliable = fullMascara;
    
    setBitFalse(baralhoAvaliable, vira);

    for (int i = 0; (i < 3 or mao[i] != 0); i++){
        setBitFalse(baralhoAvaliable, mao[i]-1);
    }

    for (int j = 0; (j < 7 or line[j] != 0); j++){
        setBitFalse(baralhoAvaliable, line[j]-1);
    }

}