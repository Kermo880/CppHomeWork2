#include "assignment2.hpp"
#include <string>
#include <vector>
#include <array>
#include <typeinfo>

bool RG::Homework2::assignment2()
{
    using namespace std::literals;
    int i{ 3 };
    const int ci{ 5 };
    constexpr int cxpi{ 4 };
    const int* cip = &ci;
    int* const ipc = &i;
    const int* const cipc = &ci;

    return (typeid(ci) == typeid(const int))
    && (ci == 5)
    && (typeid(cxpi) == typeid(const int))
    && (cxpi == 4)
    && (typeid(cip) == typeid(const int *))
    && (*cip == ci) 
    && (typeid(ipc) == typeid(int * const))
    && (*ipc == i)
    && (typeid(cipc) == typeid(const int * const))
    && (*cipc == ci);
}

