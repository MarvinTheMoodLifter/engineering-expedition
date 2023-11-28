class Date {
private:
  int y, m, d;

public:
  // Default constructor which sets a default date
  Date();
  // Constructor which throw and error if the date is not valid
  Date(int yy, int mm, int dd);

  // Return month, day, year
  int month(void);
  int day(void);
  int year(void);

  // Verifies if the date is valid
  bool is_valid();
  // Check if the year is a leap year, return the days in februray
  int isLeapYear();
};
