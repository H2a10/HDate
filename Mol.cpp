
#include "Mol.h"
#include <iostream>
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
int main(){
    Mol h {};
    cout<<(REG_YEAR_VAL*12)+(LEAP_YEAR_VAL*7);
}