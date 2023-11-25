#include "../include/Date.h"
#include <stdexcept>


Date::Date() : y{1970}, m{1}, d{1} {}
Date::Date(int yy, int mm, int dd) : y{yy}, m{mm}, d{dd} {
  if (!is_valid())
    throw std::invalid_argument("Data non valida"); //correzione messaggio di errore
}



int Date::month(void) { return m; }
int Date::day(void) { return d; }
int Date::year(void) { return y; }



bool Date::is_valid() {

  // Year > currentYear return false
  // leap year (anni bisestili)
  
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
    if (d > 29)
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


