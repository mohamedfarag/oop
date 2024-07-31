from Book import Book

def main():
    book1 = Book("An Introduction to Dynamic Programming", "Timothy Budd", 1991)
    book1.print_details()
    book1.update_title("An Introduction to Object-Oriented Programming")
    book1.print_details()
    book2 = Book("AI Literacy Fundamentals", "Ben Jones")
    book2.print_details()
    print(f"Total Books: {Book.get_book_count()}")
    Book.static_method_example()


if __name__ == "__main__":
    main()