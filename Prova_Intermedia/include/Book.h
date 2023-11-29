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
  // Default Constructor
  Book();
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
  std::string getIsbn() const;
  // Return Title of the Book
  std::string getTitle() const;
  // Return Book's author name
  std::string getAuthorName() const;
  // Return Book's author surname
  std::string getAuthorSurname() const;
  // Return Book's Copyright Date
  Date getCopyrightsDate() const;
  // Return Book's Availability
  bool getAvailable() const;

  // Set Book Availability
  void bookReturn();
  void bookLoan();
  // Check if Copyright Date is specified
  bool isDateInserted() const;
  // Check if ISBN code is a valid one
  void isbnIsValid(std::string bookIsbn) const;
};

// Comparison operators overload
bool operator==(Book a, Book b);
bool operator!=(Book a, Book b);

// Output Book information with cout
void operator<<(std::ostream &out, Book a);

#endif // BOOK_H
