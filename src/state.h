#ifndef STATE
#define STATE

#include <string>
#include <vector>

using namespace std;

extern int mao[3];
extern int vira;

void initState();
void setMao(vector<string> *cartas);
void setVira(vector<string> *viras);

#endif