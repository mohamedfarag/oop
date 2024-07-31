#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Printable.h"  // Include the Printable interface

class Book : public Printable {
protected:
    std::string title;
    std::string author;
    int year;
    static int bookCount;

public:
    Book(const std::string& title, const std::string& author, int year);
    virtual ~Book();  // Virtual destructor
    void printDetails() const override;  // Implementing the pure virtual function from Printable

    std::string getTitle() const;
    void setTitle(const std::string &title);
    std::string getAuthor() const;
    void setAuthor(const std::string &author);
    int getYear() const;
    void setYear(int year);

    static int getBookCount();  // Static method to get count of book instances

};

#endif // BOOK_H