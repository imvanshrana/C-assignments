#include <iostream>
#include <map>
#include <string>


struct Book {
    std::string isbn;
    std::string title;
    std::string author;
    std::string publisher;
};


std::map<std::string, Book> books;


void addBook(const std::string& isbn, const std::string& title, const std::string& author, const std::string& publisher) {
    books[isbn] = {isbn, title, author, publisher};
}


void lookupBook(const std::string& isbn) {
    if (books.count(isbn) == 0) {
        std::cout << "Book not available in the library." << std::endl;
    } else {
        const Book& book = books[isbn];
        std::cout << "Title: " << book.title << std::endl;
        std::cout << "Author: " << book.author << std::endl;
        std::cout << "Publisher: " << book.publisher << std::endl;
    }
}

int main() {
    
    addBook("1234567890", "NEVER HAVE I EVER", "NETFLIX", "Scribner");
    addBook("0987654321", "HEARTBREAK HIGH", "NETFLIX", "J. B. Lippincott & Co.");

    
    lookupBook("1234567890");

    
    lookupBook("9999999999");

    return 0;