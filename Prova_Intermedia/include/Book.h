#ifndef BOOK_H
#define BOOK_H
#include "Date.h"
#include <string>

class Book {
private:
  std::string isbn;
  std::string title;
  std::string authorName;
  std::string authorSurname;
  Date copyrightsDate;
  bool available;
  bool dateInserted;

public:
  Book() = default;
  // Constructor with every parameter
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, Date bookCopyrightsDate, bool bookIsAvailable);
  // Constructor without Copyright Date
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, bool bookIsAvailable);
  // Constructor without Copyright Date and Availability
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn);
  // Constructor without Availability
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, Date bookCopyrightsDate);

  // Return ISBN of the Book
  std::string getIsbn();
  // Return Title of the Book
  std::string getTitle();
  // Return Book's author name
  std::string getAuthorName();
  // Return Book's author surname
  std::string getAuthorSurname();
  // Return Book's Copyright Date
  Date getCopyrightsDate();
  // Return Book's Availability
  bool getAvailable();

  // Set Book Availability
  void bookReturn();
  void bookLoan();
  // Check if Copyright Date is specified
  bool isDateInserted();
};

// Comparison operators overload
bool operator==(Book a, Book b);
bool operator!=(Book a, Book b);

// Output Book information with cout
void operator<<(std::ostream &out, Book a);

#endif // BOOK_H
