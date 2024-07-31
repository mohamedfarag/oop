#include "Book.h"
#include <iostream>
#include <string>
int Book::bookCount = 0;

Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {
    bookCount++;
}

Book::~Book() {
    std::cout << "Destroying Book: " << title << std::endl;
    bookCount--;
}

// Override the printDetails method from Printable
void Book::printDetails() const {
    std::cout << "Title: " << title
              << ", Author: " << author
              << ", Year: " << (year ? std::to_string(year) : "Unknown") << std::endl;
}

// Getter for title
std::string Book::getTitle() const {
    return title;
}

// Setter for title
void Book::setTitle(const std::string &title) {
    this->title = title;
}

// Getter for author
std::string Book::getAuthor() const {
    return author;
}

// Setter for author
void Book::setAuthor(const std::string &author) {
    this->author = author;
}

// Getter for year
int Book::getYear() const {
    return year;
}

// Setter for year
void Book::setYear(int year) {
    this->year = year;
}

// Static method to get book count

int Book::getBookCount() {
    return bookCount;
}

