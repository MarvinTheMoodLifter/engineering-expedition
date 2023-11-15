#include "Rational.h"
#include <iostream>
#include <string>

Rational::Rational() {}
Rational::Rational(int num) : numerator{num}, denominator{1} {}
Rational::Rational(int num, int den) : numerator{num}, denominator{den} {}

int Rational::getNumerator() const { return numerator; }
int Rational::getDenominator() const { return denominator; }

void Rational::setNumerator(int newNum) { numerator = newNum; }
void Rational::setDenominator(int newDen) { denominator = newDen; }

void Rational::operator=(const Rational &r) {
  numerator = r.numerator;
  denominator = r.denominator;
}
double Rational::to_double() const {
  return static_cast<double>(numerator) / denominator;
}

// Overload operatori

Rational operator+(const Rational &r, const Rational &s) {
  Rational result;
  int num1 = r.getNumerator();
  int num2 = s.getNumerator();
  int den1 = r.getDenominator();
  int den2 = s.getDenominator();
  if (den1 == den2) {
    result.setNumerator(num1 + num2);
    result.setDenominator(den1);
  } else {
    result.setDenominator(den1 * den2);
    result.setNumerator((num1 * den2) + (num2 * den1));
  }
  return result;
}
// Rational operator+(const Rational &r, const int &s) {
//   Rational result;
//   int num1 = r.getNumerator();
//   int den1 = r.getDenominator();
//   result.setNumerator(num1 + s * r.getDenominator());
//   result.setDenominator(den1);
//   return result;
// }

Rational operator-(const Rational &r, const Rational &s) {
  Rational result;
  int num1 = r.getNumerator();
  int num2 = s.getNumerator();
  int den1 = r.getDenominator();
  int den2 = s.getDenominator();
  if (den1 == den2) {
    result.setNumerator(num1 - num2);
    result.setDenominator(den1);
  } else {
    result.setDenominator(den1 * den2);
    result.setNumerator((num1 * den2) - (num2 * den1));
  }
  return result;
}

Rational operator*(const Rational &r, const Rational &s) {
  Rational result;
  result.setNumerator(r.getNumerator() * s.getNumerator());
  result.setDenominator(r.getDenominator() * s.getDenominator());
  return result;
}
Rational operator/(const Rational &r, const Rational &s) {
  Rational result;
  result.setNumerator(r.getNumerator() * s.getDenominator());
  result.setDenominator(r.getDenominator() * s.getNumerator());
  return result;
}
bool operator==(const Rational &r, const Rational &s) {
  return r.getNumerator() == s.getNumerator() &&
         r.getDenominator() == s.getDenominator();
}
bool operator>(const Rational &r, const Rational &s) {
  return r.to_double() > s.to_double();
}
bool operator<(const Rational &r, const Rational &s) {
  return r.to_double() < s.to_double();
}
std::ostream &operator<<(std::ostream &os, const Rational &r) {
  os << r.getNumerator() << "/" << r.getDenominator();
  return os;
}
