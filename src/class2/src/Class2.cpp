#include "Class2.hpp"
#include <iostream>

Class2::Class2(Class1 arg) : member(arg) {
    std::cout << "Class2 constructed"<<std::endl;
};