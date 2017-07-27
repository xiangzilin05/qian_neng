//
// Created by Administrator on 2017/7/27.
//

#ifndef QIAN_NENG_DATE_H
#define QIAN_NENG_DATE_H

#include <iostream>

using std::ostream;

class Date {
private:
    int year;
    int month;
    int day;
public:
    Date(int y = 0, int m = 0, int d = 0)
            : year(y), month(m), day(d) {}

    friend ostream &operator<<(ostream &os, const Date &date);

    friend Date &operator++(Date &date);
};


#endif //QIAN_NENG_DATE_H
