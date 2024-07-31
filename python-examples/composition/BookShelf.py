from Section import Section
from Science import Science
from Fiction import Fiction

class BookShelf:
    def __init__(self):
        self.sections = []

    def add_section(self, section):
        self.sections.append(section)

    def print_details(self):
        print("BookShelf Details:")
        for section in self.sections:
            section.print_details()

