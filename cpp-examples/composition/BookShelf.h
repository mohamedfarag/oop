#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <vector>
#include "Section.h"

class BookShelf {
private:
    std::vector<Section*> sections;

public:
    BookShelf();
    ~BookShelf();
    void addSection(Section* section);
    void printDetails() const;

    // Prevent copying to simplify memory management
    BookShelf(const BookShelf&) = delete;
    BookShelf& operator=(const BookShelf&) = delete;
};

#endif // BOOKSHELF_H