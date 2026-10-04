#pragma once
#include <iostream>

class Fraction {
private:
    int numerator;  
    int denominator; 

    int gcd(int a, int b) const {
        a = (a < 0) ? -a : a;
        b = (b < 0) ? -b : b;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void simplify() {
        if (denominator == 0) return;
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction();
    Fraction(int num, int den);

    void print() const;

    Fraction operator*(const Fraction& other) const;
    Fraction operator*(int value) const;
    friend Fraction operator*(int value, const Fraction& frac);

    Fraction operator/(const Fraction& other) const;
    Fraction operator/(int value) const;
    friend Fraction operator/(int value, const Fraction& frac);
};