class Date {

private:
  int y, m, d;

public:
  Date();
  Date(int yy, int mm, int dd);

  int month(void);
  int day(void);
  int year(void);
  bool is_valid();
  int isLeapYear();

};
