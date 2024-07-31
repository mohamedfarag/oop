#include "Section.h"
#include <iostream>

Section::Section(const std::string& name) : name(name) {}

Section::~Section() {
    for (auto book : books) {
        delete book;
    }
    books.clear();
}

void Section::addBook(Book* book) {
    books.push_back(book);
}

void Section::printDetails() const {
    std::cout << "Section: " << name << std::endl;
    for (const auto& book : books) {
        book->printDetails();
    }
}