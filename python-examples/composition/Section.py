class Section:
    def __init__(self, name):
        self.name = name
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def print_details(self):
        print(f"Section: {self.name}")
        for book in self.books:
            book.print_details()
