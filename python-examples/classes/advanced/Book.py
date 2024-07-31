class Book:
    book_count = 0  # Class variable to keep track of the number of books

    def __init__(self, title, author, year=None):
        self.title = title
        self.author = author
        self.year = year
        Book.book_count += 1

    def __del__(self):
        print(f"Deleting {self.title}")
        Book.book_count -= 1

    def print_details(self):
        year_display = self.year if self.year else "Unknown"
        print(f"Title: {self.title}, Author: {self.author}, Year: {year_display}")

    def update_title(self, new_title):
        self.title = new_title  # 'self' refers to the instance the method is called on

    @classmethod
    def get_book_count(cls):
        return cls.book_count

    @staticmethod
    def static_method_example():
        print("This is a static method.")
