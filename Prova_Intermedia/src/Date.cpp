#include "../include/Date.h"
#include <stdexcept>

// Default constructor which sets a default date
Date::Date() : y{1970}, m{1}, d{1} {}
// Constructor which throw and error if the date is not valid
Date::Date(int yy, int mm, int dd) : y{yy}, m{mm}, d{dd} {
  if (!is_valid())
    throw std::invalid_argument("Invalid Date");
}

// Return month, day, year
int Date::month(void) { return m; }
int Date::day(void) { return d; }
int Date::year(void) { return y; }

// Verifies if the date is valid
bool Date::is_valid() {
  int leapMonth = isLeapYear();
  if (m < 1 || m > 12)
    return false;
  if (d < 1)
    return false;
  switch (m) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (d > 31)
      return false;
    break;
  case 2:
    if (d > leapMonth)
      return false;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (d > 30)
      return false;
    break;
  }
  return true;
}

// Check if the year is a leap year, return the days in februray
int Date::isLeapYear() {
  int februaryLeapYear = 29;
  int februaryNotLeapYear = 28;
  if (y % 400 == 0) {
    return februaryLeapYear;
  } else if (y % 100 == 0) {
    return februaryNotLeapYear;
  } else if (y % 4 == 0) {
    return februaryLeapYear;
  } else {
    return februaryNotLeapYear;
  }
}
