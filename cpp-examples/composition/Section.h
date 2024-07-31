#ifndef SECTION_H
#define SECTION_H

#include <vector>
#include "Book.h"

class Section {
private:
    std::string name;
    std::vector<Book*> books;  // A section contains multiple books

public:
    Section(const std::string& name);
    ~Section();
    void addBook(Book* book);
    void printDetails() const;

    // Prevent copying to simplify memory management
    Section(const Section&) = delete;
    Section& operator=(const Section&) = delete;
};

#endif // SECTION_H