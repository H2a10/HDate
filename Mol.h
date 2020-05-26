#include <ostream>

#pragma once
class HDate
{
private:
    short day;
    short hour;
    int ch;
    //void simp();
public:
    HDate(short d=0,short h=0,int c=0);
    friend std::ostream&operator<<(std::ostream&out,HDate h);
    HDate operator*(int) const;
    HDate operator+(const HDate) const;
    ~HDate();
};
const HDate START_VAL={2,5,204};
const HDate MONTH_VAL={29,12,793};
const HDate REG_YEAR_VAL={348,144,9516};
const HDate LEAP_YEAR_VAL={5,21,589};
const HDate CYCLE_VAL;