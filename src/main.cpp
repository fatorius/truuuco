#include <iostream>

#include "main.h"
#include "init.h"

using namespace std;

int main(){
    
    init();

    while(readCommand()){
        continue;
    }

    return 0;
}
