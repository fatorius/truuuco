#include <iostream>

#include "init.h"
#include "interface.h"
#include "state.h"
#include "bits.h"
#include "baralho.h"

using namespace std;

void printInitMessage(){
    cout<<"C++ Truuuco 2023"<<endl;
    cout<<"Criado por HugoSouza"<<endl;
    cout<<"Algoritmo pronto"<<endl;
}

void init(){
    initMascaras();
    initCommands();
    initState();
    initBaralho();

    printInitMessage();
}