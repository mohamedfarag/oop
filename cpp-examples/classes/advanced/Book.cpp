#include "Book.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::to_string;

int Book::bookCount = 0; //Initialize Static member

// Constructor with all parameters
Book::Book(const string& title, const string& author, int year) : title(title), author(author), year(year) {
    bookCount++;
}

// Constructor overload with default year
Book::Book(const string& title, const string& author) : Book(title, author, 0) {}

// Destructor
Book::~Book() {
    cout << "Destroying " << title << endl;
    bookCount--;
}

// Print details about the book
void Book::printDetails() const {
    cout << "Title: " << title
              << ", Author: " << author
              << ", Year: " << (year ? to_string(year) : "Unknown") << endl;
}

// Update book title
void Book::updateTitle(const string& newTitle) {
    this->title = newTitle; // 'this' is used to refer to the current object instance
}

// Static function to get the number of books
int Book::getBookCount() {
    return bookCount;
}
