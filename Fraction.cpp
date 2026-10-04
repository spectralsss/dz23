#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den == 0 ? 1 : den) {
    simplify();
}

void Fraction::print() const {
    if (denominator == 1) {
        std::cout << numerator;
    }
    else {
        std::cout << numerator << "/" << denominator;
    }
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator*(int value) const {
    return Fraction(numerator * value, denominator);
}

Fraction operator*(int value, const Fraction& frac) {
    return frac * value;
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

Fraction Fraction::operator/(int value) const {
    if (value == 0) {
        return Fraction(0, 1);
    }
    return Fraction(numerator, denominator * value);
}

Fraction operator/(int value, const Fraction& frac) {
    if (frac.numerator == 0) {
        return Fraction(0, 1);
    }
    return Fraction(value * frac.denominator, frac.numerator);
}