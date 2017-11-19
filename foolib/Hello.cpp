#include <iostream>
#include "Hello.h"

void Hello::hello() {
    std::cout << "Hello, foo!" << std::endl;
}

int Hello::foo() {
    return 17;
}
