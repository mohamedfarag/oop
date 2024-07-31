#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using std::string;


class Book {

 private:
    string title;
    string author;
    int year;
    static int bookCount; // Static member to track the number of books

 public: 
    Book(const string& title, const string& author, int year);

    Book(const string& title, const string& author); 

    ~Book();

    // Print details about the book
    void printDetails() const;

    // Update book title
    void updateTitle(const string& newTitle);

    // Static function to get the number of books
    static int getBookCount();

    // Inline function example
    inline void printAuthor() const {
      std::cout << "Author: " << author << std::endl;
      }

};

#endif

