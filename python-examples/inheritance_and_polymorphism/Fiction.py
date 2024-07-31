from Book import Book

class Fiction(Book):
    def __init__(self, title, author, year, genre):
        super().__init__(title, author, year)
        self.genre = genre

    def __del__(self):
        print(f"Deleted a book with Genre of: {self.genre}")

    def print_details(self):
        super().print_details()
        print(f"Genre: {self.genre}")