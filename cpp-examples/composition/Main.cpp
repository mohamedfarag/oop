#include "BookShelf.h"
#include "Science.h"
#include "Fiction.h"

int main() {
    BookShelf bookshelf;

    // Create sections
    Section* sciSection = new Section("Science");
    sciSection->addBook(new Science("The Elegant Universe", "Brian Greene", 1999, "Physics"));
    sciSection->addBook(new Science("A Brief History of Time", "Stephen Hawking", 1988, "Astrophysics"));

    Section* ficSection = new Section("Fiction");
    ficSection->addBook(new Fiction("The Hobbit", "J.R.R. Tolkien", 1937, "Fantasy"));
    ficSection->addBook(new Fiction("1984", "George Orwell", 1949, "Dystopia"));

    // Add sections to bookshelf
    bookshelf.addSection(sciSection);
    bookshelf.addSection(ficSection);

    // Print details
    bookshelf.printDetails();

    return 0;
}