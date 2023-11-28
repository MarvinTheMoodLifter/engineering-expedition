# Prova intermedia di programmazione

1. Progettare e implementare la classe `Book` che rappresenta un libro. Tale classe ha membri per
contenere:
* ISBN;
* titolo;
* nome e cognome autore (due membri diversi) – è previsto un solo autore per libro;
* data di copyright – la data è rappresentata usando una apposita classe Date simile a quella sviluppata a lezione;
* stato in prestito / disponibile.

Il codice ISBN è rappresentato mediante una `std::string` il cui unico requisito è quello di avere
lunghezza 13.

La classe `Book` deve essere dotata di:
* funzioni membro che ritornano i vari dati membro;
* costruttori;
* funzioni per registrare il prestito e la restituzione;
* appositi strumenti (eventualmente implementati nella classe dedicata) per la validazione della data;
* `operator==` e `operator!=` che confrontano due `Book` basandosi sul codice ISBN;
* `operator<<` che stampa titolo, autore, ISBN e la data di copyright su righe separate in output.

La classe `Book` deve permette di eseguire la seguente operazione:
```cpp
Book myBook("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-4")
```
2. Modificare opportunamente la classe `MyVector` implementata durante i precedenti laboratori per creare una classe `BookShelf` che gestisce vettori di elementi `Book`. Tramite la classe `BookShelf` dovranno essere compilabili le seguenti istruzioni:
```cpp
BookShelf shelf(10);        // Crea un vettore di 10 elementi Book
shelf.push_back(mybook);    // Aggiunge l'elemento mybook al vettore shelf;
                            // mybook è un oggetto della classe Book precedentemente creato
shelf.pop_back();           // Rimuove l'ultimo elemento (se esiste) dal vettore shelf
```

## Folder structure
```bash
Prova_Intermedia/
├── build
├── CMakeLists.txt
├── include
│   ├── Book.h
│   ├── BookShelf.h
│   └── Date.h
├── README.md
└── src
    ├── Book.cpp
    ├── BookShelf.cpp
    ├── Date.cpp
    └── main.cpp
```
