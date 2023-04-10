#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

#include "help.h"
#include "interface.h"
#include "state.h"

using namespace std;

char cmd[MAX_COMMAND_SIZE];    
string val;
vector<string> commands;

enum comandosValidos { 
    notDefined,
    cmdHand,
    cmdVira,
    cmdHelp,
    cmdStarter,
    endProgram 
};

map<string, comandosValidos> comandosValidosMap;

void initCommands(){
    comandosValidosMap["hand"] = cmdHand;
    comandosValidosMap["help"] = cmdHelp;
    comandosValidosMap["vira"] = cmdVira;
    comandosValidosMap["starter"] = cmdStarter;
    comandosValidosMap["end"] = endProgram;
}

bool readCommand(){
    commands.clear();

    cin.getline(cmd, MAX_COMMAND_SIZE);

    stringstream streamData(cmd);

    while (getline(streamData, val, ' ')) {
        commands.push_back(val);
    }

    switch(comandosValidosMap[commands[0]]){
        case cmdHand:
            setMao(&commands);
            break;
        case cmdHelp:
            printHelp();
            break;
        case cmdVira:
            setVira(&commands);
            break;
        case cmdStarter:
            if (commands[1] != "0" and commands[1] != "1"){
                starterInvalidArgument();
                break;
            }
            setStarter(stoi(commands[1]));
            break;
        case endProgram:
            return false;
        default:
            cout<<"Comando desconhecido pelo programa"<<endl;
            cout<<"Digite help para uma lista de comandos validos"<<endl;
            break;
    }

    return true;
}