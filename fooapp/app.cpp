#include <iostream>
#include <Hello.h>

int main() {
    std::cout << "Hello, app!" << std::endl;
    Hello h;
    std::cout << h.hello() << std::endl;
    return 0;
}