//
// Created by Administrator on 2017/7/27.
//

#include <iostream>
#include "cat.h"
using namespace std;

int Cat::getAge() {
    return itsAge;
}

void Cat::setAge(int age) {
    itsAge = age;
}

void Cat::meow() {
    cout << "Meow. \n";
}