#include <iostream>

#include "init.h"
#include "interface.h"
#include "state.h"

using namespace std;

void printInitMessage(){
    cout<<"C++ Truuuco 2023"<<endl;
    cout<<"Criado por HugoSouza"<<endl;
    cout<<"Algoritmo pronto"<<endl;
}

void init(){
    initCommands();
    initState();

    printInitMessage();
}