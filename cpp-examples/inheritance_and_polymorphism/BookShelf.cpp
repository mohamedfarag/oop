#include "Science.h"
#include "Fiction.h"
#include <iostream>

int main() {
    Science sciBook("The Elegant Universe", "Brian Greene", 1999, "Physics");
    Fiction ficBook("The Hobbit", "J.R.R. Tolkien", 1937, "Fantasy");

    sciBook.printDetails();
    ficBook.printDetails();

    return 0;
}