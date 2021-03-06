#include <iostream>
#include "Mol.h"
#include <cstdio>
using namespace std;
Mol::Mol(short d,short h,int c)
{
    ch=c%1080;
    hour=((c-ch)/1080+h);
    day=((short) hour/24+d)%7;
    hour%=24;
}
ostream&operator<<(ostream&out,Mol h){
    out<<h.day<<":"<<h.hour<<":"<<h.ch<<std::endl;
    return out;
}
Mol Mol::operator*(int n)const{
    return Mol(n*day,n*hour,n*ch);
}
Mol Mol::operator+(const Mol h)const{
    return Mol(day+h.day,hour+h.hour,ch+h.ch);
}
Mol::~Mol()
{
}
Mol Mol::getmolofyear(int year){
    year-=1;
    int cycles,remain;
    int nl=0,nr=0;
    cycles=year/19;
    remain=year%19;
    int i;
    for (i=0;i<remain;i++){
        //cout<<YEAR_TYPES[i]<<std::endl;
        if (YEAR_TYPES[i])
            nl+=1;
        else
            nr+=1;
    }
    std::printf("cycle number: %1$d\nnumber of remaining years: %2$d\nleap years: %3$d\nreg years: %4$d\n",cycles,remain,nl,nr);
    return (CYCLE_VAL*cycles)+(REG_YEAR_VAL*nr)+(LEAP_YEAR_VAL*nl)+START_VAL;
}
int main(){
    Mol h {};
    cout<<h.getmolofyear(5780);
}
