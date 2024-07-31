from Book import Book

class Science(Book):
    def __init__(self, title, author, year, field):
        super().__init__(title, author, year)
        self.field = field

    def print_details(self):
        super().print_details()
        print(f"Field: {self.field}")
