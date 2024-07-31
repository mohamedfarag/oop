from abc import ABC, abstractmethod

class Printable(ABC):
    @abstractmethod
    def print_details(self):
        pass