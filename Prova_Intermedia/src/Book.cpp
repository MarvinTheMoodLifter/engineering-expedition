#include "../include/Book.h"
#include <stdexcept>

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
}

Book::Book(std::string autName, std::string autSurname, std::string bookTitle,
           std::string bookIsbn, bool bookIsAvailable)
    : authorName(autName), authorSurname(autSurname), title(bookTitle),
      isbn(bookIsbn), available(bookIsAvailable) {}
// se non c'e isbn da errore: "Manca isbn"
