#include "Class1.hpp"
class Class2
{
private:
    Class1 member;
public:
    Class2() = delete;
    ~Class2() = default;
    Class2(Class1 arg);
};
