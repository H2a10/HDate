
#include "HDate.h"
#include <iostream>
using namespace std;
HDate::HDate(short d,short h,int c)
{
    ch=c%1080;
    hour=((c-ch)/1080+h);
    day=((short) hour/24+d)%7;
    hour%=24;
}
ostream&operator<<(ostream&out,HDate h){
    out<<h.day<<":"<<h.hour<<":"<<h.ch<<std::endl;
    return out;
}
HDate HDate::operator*(int n)const{
    return HDate(n*day,n*hour,n*ch);
}
HDate HDate::operator+(const HDate h)const{
    return HDate(day+h.day,hour+h.hour,ch+h.ch);
}
HDate::~HDate()
{
}
int main(){
    HDate h {};
    cout<<(REG_YEAR_VAL*12)+(LEAP_YEAR_VAL*7);
}