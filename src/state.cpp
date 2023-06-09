#include <iostream>
#include <string.h>

#include "state.h"

int mao[3];
int vira;
int starter;
int line[7];

void initState(){
    memset(mao, 0, sizeof(mao));
    vira = 0;
    starter = ELES;
}

void setStarter(int st){
    starter = st;
}

void setVira(vector<string> *viras){
    vector<string> vrs = *viras;

    vira = 0;

    for (unsigned int i = 1; i < vrs.size(); i++){
        vira = stoi(vrs[i]);
    }
}

void setMao(vector<string> *cartas){
    vector<string> crds = *cartas;
    
    memset(mao, 0, sizeof(mao));

    for (unsigned int i = 1; i < crds.size(); i++){
        mao[i] = stoi(crds[i]);
    }
}

void setLine(vector<string> *linha){
    vector<string> lnh = *linha;

    memset(line, 0, sizeof(line));

    for (unsigned int i = 1; i < lnh.size(); i++){
        line[i] = stoi(lnh[i]);
    }
}