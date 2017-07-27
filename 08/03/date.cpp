//
// Created by Administrator on 2017/7/27.
//

#include "date.h"
#include <iostream>
using std::endl;

ostream& operator<<(ostream &os, const Date &date) {
    os << date.year << "/" << date.month << "/" << date.day << endl;
    return os;
}

Date& operator++(Date &date) {
    date.day++;
    return date;
}