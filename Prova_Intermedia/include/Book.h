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
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, Date bookCopyrightsDate, bool bookIsAvailable);
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, bool bookIsAvailable);
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn);
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, Date bookCopyrightsDate);
  // se non c'e isbn da errore: "Manca isbn"
  std::string getIsbn();
  std::string getTitle();
  std::string getAuthorName();
  std::string getAuthorSurname();
  Date getCopyrightsDate();
  bool getAvailable();
  void bookReturn();
  void bookLoan();
};

bool operator==(Book a, Book b);

bool operator!=(Book a, Book b);

void operator<<(std::ostream &out, Book a);

#endif // BOOK_H
