#ifndef SCIENCE_H
#define SCIENCE_H

#include "Book.h"

class Science : public Book {
public:
    Science(const std::string& title, const std::string& author, int year, const std::string& field);
    void printDetails() const override;

private:
    std::string field;
};

#endif // SCIENCE_H