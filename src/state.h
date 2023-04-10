#ifndef STATE
#define STATE

#include <string>
#include <vector>

using namespace std;

#define ELES 0
#define NOS 1

extern int mao[3];
extern int vira;

void initState();
void setMao(vector<string> *cartas);
void setVira(vector<string> *viras);
void setStarter(int st);

#endif