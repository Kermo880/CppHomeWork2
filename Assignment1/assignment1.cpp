#include "assignment1.hpp"
#include <typeinfo>
#include <string>
#include <vector>
#include <array>
#include <memory>

bool RG::Homework2::assignment1()
{
    using namespace std::literals;

    int i{ 5 };
    int& ilr1 = i;
    int&& irr = 5;
    int& ilr2 = i;
    int* ip = &i;
    int** ipp = &ip;
    int i2 = *ip;
    std::unique_ptr<int> up = std::make_unique<int>(4);
    std::shared_ptr<int> sp = std::make_shared<int>(3);
    std::weak_ptr<int> wp = sp;
    int* rp = new int(6);
    delete rp;
    rp = nullptr;

    return (typeid(ilr1) == typeid(int&))
    && (ilr1 == 5)
    && (typeid(irr) == typeid(int&&))
    && (irr == 5)
    && (typeid(ilr2) == typeid(int&))
    && (ilr2 == 5)
    && (typeid(ip) == typeid(int*))
    && (*ip == 5)
    && (typeid(ipp) == typeid(int**))
    && (**ipp == 5)
    && (typeid(i2) == typeid(int))
    && (i2 == 5)
    && (typeid(up) == typeid(std::unique_ptr<int>))
    && (*up == 4)
    && (typeid(sp) == typeid(std::shared_ptr<int>))
    && (*sp == 3)
    && (typeid(wp) == typeid(std::weak_ptr<int>))
    && (*wp.lock() == 3)
    && (typeid(rp) == typeid(int*))
    && (rp == nullptr);
}