#ifndef BOOK_H
#define BOOK_H
#include <string>

using std::string;


class Book {

 private:
    string title;
    string author;
    int year;

 public: 
    Book(const string &title, const string &author, int year);
    void printDetails() const;
};

#endif

