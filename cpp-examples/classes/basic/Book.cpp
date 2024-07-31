#include "Book.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Book::Book (const string& title, const string& author, int year)
  : title(title), author(author), year(year) {}

void Book::printDetails() const {
    cout << "Title: " << title
         << ", Author: " << author
         << ", Publication Year: " << year << endl;
}