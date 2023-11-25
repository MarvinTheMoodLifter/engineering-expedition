#include "../include/Book.h"
#include <iostream>
#include <stdexcept>
#include <string>

std::string isbn;
std::string title;
std::string authorName;
std::string authorSurname;
Date copyrightsDate;
bool available;
bool dateInserted;

// devo renderle private ??

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

bool operator==(Book a, Book b) {

  if (a.getIsbn() == b.getIsbn()) {

    return true;

  } else
    return false;
}

bool operator!=(Book a, Book b) {

  if (a.getIsbn() == b.getIsbn()) {

    return false;

  }

  else
    return true;
}

void operator<<(std::ostream &out, Book a) {

  if (dateInserted) {

    std::cout << a.getTitle() << '\n'
              << a.getAuthorName() << '\n'
              << a.getAuthorSurname() << '\n'
              << a.getIsbn() << '\n'
              << a.getCopyrightsDate().Date::day() << ' '
              << a.getCopyrightsDate().Date::month() << ' '
              << a.getCopyrightsDate().Date::year() << '\n';

  }

  else {

    std::cout << a.getTitle() << '\n'
              << a.getAuthorName() << '\n'
              << a.getAuthorSurname() << '\n'
              << a.getIsbn() << '\n'
              << "Data Copyright non inserita" << '\n';
  }
}
