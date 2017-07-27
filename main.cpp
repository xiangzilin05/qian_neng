#include <iostream>
#include "08/02/cat.h"
#include "08/03/date.h"
using std::cout;
using std::endl;

int main() {
    Date date(2017,7,27);
    cout << date;
    ++date;
    cout << date << ++date;
    return 0;
}