from BookShelf import BookShelf
from Section import Section
from Science import Science
from Fiction import Fiction

def main():
    bookshelf = BookShelf()

    sci_section = Section("Science")
    sci_section.add_book(Science("The Elegant Universe", "Brian Greene", 1999, "Physics"))
    sci_section.add_book(Science("A Brief History of Time", "Stephen Hawking", 1988, "Astrophysics"))

    fic_section = Section("Fiction")
    fic_section.add_book(Fiction("The Hobbit", "J.R.R. Tolkien", 1937, "Fantasy"))
    fic_section.add_book(Fiction("1984", "George Orwell", 1949, "Dystopia"))

    bookshelf.add_section(sci_section)
    bookshelf.add_section(fic_section)

    bookshelf.print_details()


if __name__ == "__main__":
    main()