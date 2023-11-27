#include "../include/Book.h"
#include <iostream>

Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, Date bookCopyrightsDate,
           bool bookIsAvailable) {
  // aggiungere controllo isbn numerico e trattini
  if (bookIsbn.size() != 13) {
    throw std::invalid_argument("Lunghezza ISBN non valida");
  }
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  available = bookIsAvailable;
  copyrightsDate = bookCopyrightsDate;
  dateInserted = true;
}

Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, bool bookIsAvailable) {
  if (bookIsbn.size() != 13) {
    throw std::invalid_argument("Lunghezza ISBN non valida");
  }
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  available = bookIsAvailable;
  dateInserted = false;
}

Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn) {
  if (bookIsbn.size() != 13) {
    throw std::invalid_argument("Lunghezza ISBN non valida");
  }
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  dateInserted = false;
}

Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, Date bookCopyrightsDate) {
  if (bookIsbn.size() != 13) {
    throw std::invalid_argument("Lunghezza ISBN non valida");
  }
  authorName = autName;
  authorSurname = autSurname;
  title = bookTitle;
  isbn = bookIsbn;
  copyrightsDate = bookCopyrightsDate;
  dateInserted = true;
}

std::string Book::getIsbn() { return isbn; }
std::string Book::getTitle() { return title; }
std::string Book::getAuthorName() { return authorName; }
std::string Book::getAuthorSurname() { return authorSurname; }
Date Book::getCopyrightsDate() { return copyrightsDate; }
bool Book::getAvailable() { return available; }
void Book::bookReturn() { available = true; }
void Book::bookLoan() { available = false; }

bool Book::isDateInserted() { return dateInserted; }

bool operator==(Book a, Book b) {

  return a.getIsbn() == b.getIsbn();
}

bool operator!=(Book a, Book b) {
   
  return !(a.getIsbn() == b.getIsbn());
}

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
              << "Data Copyright non inserita" << '\n';
  }
}


