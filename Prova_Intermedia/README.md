# Prova intermedia di programmazione
# HOW TO RUN
extract the content of this zip file

# If you are using CMake
> see folder structure at the end of the README

```bash
cd build

cmake ..

make

./main

```
# If you are not using CMake 

Compile with the following command ("Test" is just a placeholder, you can choose to name the file as you like):

```bash
cd src

g++ main.cpp Book.cpp BookShelf.cpp Date.cpp -idirafter ../include -o Test

# then execute using
./Test.out
```



# Some information about the implementation

* `Book.cpp`
  
	If a `Book` object doesn't have a copyrights date will return a message stating it.
	Every `Book` object is set to available to be lent when created unless otherwise stated.
	
	
* `Date.cpp`
  
	The default constructor sets as the default date "1st january 1970".
	`isValid()` checks the date.
	`isLeapYear()` sets a different value for the last day of february, so `isValid()` can correctly check the date according to the year.
	
* `BookShelf.cpp`
  
	`BookShelf` objects are initialized using an integer value that sets the initial size.
    `Book` objects can be added to the shelf using the `push_back(Book)` and removed with `pop_back()` member functions.
    The `size()` function can be used to obtain the number of books in the shelf.

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
