#include "Book.h"
#include <iostream>

int Book::bookCount = 0;

Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {
    bookCount++;
}

Book::~Book() {
    std::cout << "Destroying Book: " << title << std::endl;
    bookCount--;
}

void Book::printDetails() const {
    std::cout << "Title: " << title << ", Author: " << author << ", Year: " << (year ? std::to_string(year) : "Unknown") << std::endl;
}