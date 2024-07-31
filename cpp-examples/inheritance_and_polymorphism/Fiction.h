#ifndef FICTION_H
#define FICTION_H

#include "Book.h"

class Fiction : public Book {
public:
    Fiction(const std::string& title, const std::string& author, int year, const std::string& genre);
    virtual ~Fiction();

    void printDetails() const override;

private:
    std::string genre;
};

#endif // FICTION_H