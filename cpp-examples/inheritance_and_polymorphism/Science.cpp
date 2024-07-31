#include "Science.h"
#include <iostream>

Science::Science(const std::string& title, const std::string& author, int year, const std::string& field)
    : Book(title, author, year), field(field) {}

void Science::printDetails() const {
    Book::printDetails();
    std::cout << "Field: " << field << std::endl;
}