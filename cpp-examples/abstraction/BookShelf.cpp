#include "Book.h"
#include <iostream>

int main() {
    Book myBook ("An Introduction to Dynamic Programming", "Timothy Budd", 1991);
    myBook.printDetails();

    myBook.setTitle("An Introduction to Object-Oriented Programming");
    myBook.printDetails();

    std::cout << "Total books: " << Book::getBookCount() << std::endl;

    return 0;
}