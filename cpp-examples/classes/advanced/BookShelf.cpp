#include "Book.h"
#include <iostream>
using std::cout;
using std::endl;


int main() {
    
    Book book1("An Introduction to Dynamic Programming", "Timothy Budd", 1991);
    book1.printDetails();
    // Oops wrong title! Let's update it!
    book1.updateTitle("An Introduction to Object-Oriented Programming");
    book1.printDetails();
    Book book2("AI Literacy Fundamentals", "Ben Jones");
    book2.printDetails();
    cout << "Total Books: " << Book::getBookCount() << endl;
    book1.printAuthor();
    return 0;
}