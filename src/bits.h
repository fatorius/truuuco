#ifndef BITS
#define BITS

#include "baralho.h"

extern int fullMascara;
extern int mascaras[TOTAL_DE_CARTAS];
extern int not_mascaras[TOTAL_DE_CARTAS];

void initMascaras();

void setBit(int &num, int pos);
void setBitFalse(int &num, int pos);

#endif