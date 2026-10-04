#include <iostream>
#include "Fraction.h"

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);
    int num = 3;

    std::cout << "Початкові дроби:\n";
    std::cout << "f1 = "; f1.print(); std::cout << "\n";
    std::cout << "f2 = "; f2.print(); std::cout << "\n";
    std::cout << "num = " << num << "\n\n";

    std::cout << "=== Завдання 1: Множення (*) ===\n";

    Fraction r1 = f1 * f2;
    std::cout << "Fraction * Fraction (3/4 * 2/5) = ";
    r1.print();
    std::cout << "\n";

    Fraction r2 = num * f1;
    std::cout << "int * Fraction (3 * 3/4) = ";
    r2.print();
    std::cout << "\n";

    Fraction r3 = f1 * num;
    std::cout << "Fraction * int (3/4 * 3) = ";
    r3.print();
    std::cout << "\n\n";

    std::cout << "=== Завдання 2: Ділення (/) ===\n";

    Fraction r4 = f1 / f2;
    std::cout << "Fraction / Fraction (3/4 / 2/5) = ";
    r4.print();
    std::cout << "\n";

    Fraction r5 = num / f1;
    std::cout << "int / Fraction (3 / 3/4) = ";
    r5.print();
    std::cout << "\n";

    Fraction r6 = f1 / num;
    std::cout << "Fraction / int (3/4 / 3) = ";
    r6.print();
    std::cout << "\n";

}