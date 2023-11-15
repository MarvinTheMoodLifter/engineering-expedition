#include <iostream>

class Rational {
public:
  Rational();
  Rational(int num);
  Rational(int num, int den);

  int getNumerator() const;
  int getDenominator() const;

  void setNumerator(int newNum);
  void setDenominator(int newDen);

  void operator=(const Rational &r);

  double to_double() const;

private:
  int numerator, denominator;
};

Rational operator+(const Rational &r, const Rational &s);
Rational operator-(const Rational &r, const Rational &s);
Rational operator*(const Rational &r, const Rational &s);
Rational operator/(const Rational &r, const Rational &s);
bool operator==(const Rational &r, const Rational &s);
bool operator>(const Rational &r, const Rational &s);
bool operator<(const Rational &r, const Rational &s);
std::ostream &operator<<(std::ostream &os, const Rational &r);
