#include <iostream>
#include "08/02/cat.h"

int main() {
    Cat frisky;
    frisky.setAge(5);
    frisky.meow();
    std::cout << "frisky is a cat who is "
              << frisky.getAge()
              << " years old. \n";
    frisky.meow();
    return 0;
}