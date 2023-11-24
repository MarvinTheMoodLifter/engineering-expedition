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

public:
  Book() = default;
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, Date bookCopyrightsDate, bool bookIsAvailable);
  Book(std::string autName, std::string autSurname, std::string bookTitle,
       std::string bookIsbn, bool bookIsAvailable);
  // se non c'e isbn da errore: "Manca isbn"
};

#endif // BOOK_H
