class Book:
    book_count = 0  # Static variable to track the number of book instances

    def __init__(self, title, author, year):
        self.title = title
        self.author = author
        self.year = year
        Book.book_count += 1

    def __del__(self):
        print(f"Deleted a book with title of: {self.title}")
        Book.book_count -= 1

    def print_details(self):
        print(f"Title: {self.title}, Author: {self.author}, Year: {self.year if self.year else 'Unknown'}")
