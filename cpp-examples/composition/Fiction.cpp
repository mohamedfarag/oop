#include "Fiction.h"
#include <iostream>

Fiction::Fiction(const std::string& title, const std::string& author, int year, const std::string& genre)
    : Book(title, author, year), genre(genre) {}

Fiction::~Fiction() {
    std::cout << "Destroying Fiction with genre of: " << genre << std::endl;
}

void Fiction::printDetails() const {
    Book::printDetails();
    std::cout << "Genre: " << genre << std::endl;
}