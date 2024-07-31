#ifndef PRINTABLE_H
#define PRINTABLE_H

class Printable {
public:
    virtual ~Printable() {}  // Virtual destructor for safe polymorphic use
    virtual void printDetails() const = 0;  // Pure virtual function making this an abstract class
};

#endif // PRINTABLE_H