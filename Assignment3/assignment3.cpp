#include "assignment3.hpp"
#include <string>
#include <vector>
#include <array>
#include <typeinfo>
#include <iostream>

void funk() {
    std::cout << "Hello World!" << "\n";
}

int funk5() {
    int a = 5;
    return a;
}

int sum(int a, int b);

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

void increase(int& value) {
    value++;
}

void decrease(int* value) {
    (*value)--;
}

constexpr int square(int a) {
    return a * a;
}

constexpr int cube(int a) {
    return a * a * a;
}

bool RG::Homework2::assignment3() {
    using namespace std::literals;
    int i1{ 3 };
    int i2{ 8 };
    funk();
    int a1{ funk5() };
    int a2{ sum(3, 2) };
    double a3{ sum(5.4, 4.5) };
    increase(i1);
    decrease(&i2);
    int a4{ square(3) };
    int a5{ cube(3) };

    static_assert(square(5) == 25);
    return (typeid(&funk) == typeid(void(*)()))
        && (typeid(&funk5) == typeid(int(*)()))
        && (a1 == 5)
        && (a2 == 5)
        && (a3 == 9.9)
        && (typeid(&increase) == typeid(void(*)(int&)))
        && (i1 == 4)
        && (typeid(&decrease) == typeid(void(*)(int*)))
        && (i2 == 7)
        && (typeid(&square) == typeid(int(*)(int)))
        && (a4 == 9)
        && (typeid(&cube) == typeid(int(*)(int)))
        && (a5 == 27);
}