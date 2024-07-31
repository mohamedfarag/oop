from Science import Science
from Fiction import Fiction

def main():
    sci_book = Science("The Elegant Universe", "Brian Greene", 1999, "Physics")
    fic_book = Fiction("The Hobbit", "J.R.R. Tolkien", 1937, "Fantasy")

    sci_book.print_details()
    fic_book.print_details()

if __name__ == "__main__":
    main()