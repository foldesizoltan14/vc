#include "std_lib_facilities.h"
int main(){

ifstream f("be.fa");
ofstream g("ki.txt");

int i;
char k;
while(i<=10*1024*1024)
{
f.get(k);
g<<k;
i++;

}
f.close();
g.close();
}

