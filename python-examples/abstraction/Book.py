from Printable import Printable

class Book(Printable):
    book_count = 0

    def __init__(self, title, author, year):
        self._title = title
        self._author = author
        self._year = year
        Book.book_count += 1

    def __del__(self):
        print("Destroying Book Object")
        Book.book_count -= 1

    # Getter for title
    @property
    def title(self):
        return self._title

    # Setter for title
    @title.setter
    def title(self, title):
        self._title = title

    # Getter for author
    @property
    def author(self):
        return self._author

    # Setter for author
    @author.setter
    def author(self, author):
        self._author = author

    # Getter for year
    @property
    def year(self):
        return self._year

    # Setter for year
    @year.setter
    def year(self, year):
        self._year = year

    # Static method to get book count
    @staticmethod
    def get_book_count():
        return Book.book_count

    # Implementing print_details from Printable
    def print_details(self):
        print(f"Title: {self.title}\nAuthor: {self.author}\nYear: {self.year}")
