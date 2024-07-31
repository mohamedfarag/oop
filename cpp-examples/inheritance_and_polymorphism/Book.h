#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year);
    virtual ~Book();
    virtual void printDetails() const;

protected:
    std::string title;
    std::string author;
    int year;
    static int bookCount;
};

#endif // BOOK_H