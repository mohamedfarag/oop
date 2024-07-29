class Book:
    def __init__(self, title, author, year):
        self.title = title
        self.author = author
        self.year = year

    def print_details(self):
        print(f"Title: {self.title}, Author: {self.author}, Publication Year: {self.year}")