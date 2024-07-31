from Book import Book

def main():
    book1 = Book("Intro to Dynamic Programming", "Tim Budd", 1991)
    book1.print_details()

    book1.title = "Intro to OOP"
    book1.print_details()

    print(f"Total books: {Book.get_book_count()}")

if __name__ == "__main__":
    main()
