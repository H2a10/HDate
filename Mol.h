#include <ostream>

#pragma once
class Mol
{
private:
    short day;
    short hour;
    int ch;
    //void simp();
public:
    Mol(short d=0,short h=0,int c=0);
    friend std::ostream&operator<<(std::ostream&out,Mol h);
    Mol operator*(int) const;
    Mol operator+(const Mol) const;
    ~Mol();
};
const Mol START_VAL={2,5,204};
const Mol MONTH_VAL={29,12,793};
const Mol REG_YEAR_VAL={348,144,9516};
const Mol LEAP_YEAR_VAL={5,21,589};
const Mol CYCLE_VAL;