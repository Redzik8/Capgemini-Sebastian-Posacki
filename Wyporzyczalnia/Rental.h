#pragma once

#include <iostream>
#include <vector>
#include "Book.h"

class Rental
{
public:
    Rental();
    ~Rental();

    void importBooksFromFile(std::string Filename = "BookList.txt");
    void showAllBooks();
    void showBook(int index);
    void addBook();
    void deleteBook();
    void reports();
    void searchBookListForAuthor(std::string name);
    void getBookList(std::vector<Book> &bookList);
private:

    std::vector<Book> m_bookList;
};

