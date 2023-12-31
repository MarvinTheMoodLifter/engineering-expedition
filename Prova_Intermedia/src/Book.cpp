#include "Book.h"
#include <iostream>
#include <stdexcept>

// Default Constructor
Book::Book() = default;

// Constructor with every parameter
Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, Date bookCopyrightsDate,
           bool bookIsAvailable) {
  isbnIsValid(bookIsbn);
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  available = bookIsAvailable;
  copyrightsDate = bookCopyrightsDate;
  dateInserted = true;
}

// Constructor without Copyright Date
Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, bool bookIsAvailable) {
  isbnIsValid(bookIsbn);
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  available = bookIsAvailable;
  dateInserted = false;
}

// Constructor without Copyright Date and Availability
Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn) {
  isbnIsValid(bookIsbn);
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  dateInserted = false;
}

// Constructor without Availability
Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, Date bookCopyrightsDate) {
  isbnIsValid(bookIsbn);
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  copyrightsDate = bookCopyrightsDate;
  dateInserted = true;
}

// Return ISBN of the Book
std::string Book::getIsbn() const { return isbn; }
// Return Title of the Book
std::string Book::getTitle() const { return title; }
// Return Book's author name
std::string Book::getAuthorName() const { return authorName; }
// Return Book's author surname
std::string Book::getAuthorSurname() const { return authorSurname; }
// Return Book's Copyright Date
Date Book::getCopyrightsDate() const { return copyrightsDate; }
// Return Book's Availability
bool Book::getAvailable() const { return available; }

// Set Book Availability
void Book::bookReturn() { available = true; }
void Book::bookLoan() { available = false; }
// Check if Copyright Date is specified
bool Book::isDateInserted() const { return dateInserted; }
// Check if ISBN code is a valid one
void Book::isbnIsValid(std::string bookIsbn) const {
  if (bookIsbn.size() != 13) {
    throw std::invalid_argument(
        "Invalid ISBN argument: It must be 13 characters long");
  }
}

// Comparison operators overload
bool operator==(Book a, Book b) { return a.getIsbn() == b.getIsbn(); }
bool operator!=(Book a, Book b) { return !(a.getIsbn() == b.getIsbn()); }

// Output Book information with cout
void operator<<(std::ostream &out, Book a) {
  if (a.isDateInserted()) {
    std::cout << a.getTitle() << '\n'
              << a.getAuthorName() << '\n'
              << a.getAuthorSurname() << '\n'
              << a.getIsbn() << '\n'
              << a.getCopyrightsDate().Date::day() << ' '
              << a.getCopyrightsDate().Date::month() << ' '
              << a.getCopyrightsDate().Date::year() << '\n';
  } else {
    std::cout << a.getTitle() << '\n'
              << a.getAuthorName() << '\n'
              << a.getAuthorSurname() << '\n'
              << a.getIsbn() << '\n'
              << "Copyright Date not defined." << '\n';
  }
}
