#include "BookShelf.h"
#include <iostream>

BookShelf::BookShelf() {}

BookShelf::~BookShelf() {
    for (auto section : sections) {
        delete section;
    }
    sections.clear();
}

void BookShelf::addSection(Section* section) {
    sections.push_back(section);
}

void BookShelf::printDetails() const {
    std::cout << "BookShelf Details:" << std::endl;
    for (const auto& section : sections) {
        section->printDetails();
    }
}