#include "Rental.h"
#include<iostream>
#include<string>
#include <vector>
#include <fstream>
#include <algorithm>

#include "Book.h"
Rental::Rental()
{
}

Rental::~Rental()
{

}

// Book Starting Here

void Rental::importBooksFromFile(std::string Filename)
{
    Book book("","","","",0,"",0);
    std::fstream bookFile;
    bookFile.open(Filename);

    if (!bookFile.is_open())
    {
        std::cout << "Blad Pliku Gier";
    }

    std::string temp_bookName, temp_authorName, temp_authorSurname, temp_genre, temp_year, temp_publisher, temp_pagesNumber;

    while (bookFile.good())
    {
        std::getline(bookFile, temp_bookName, ',');
        if (temp_bookName == "")
        {
            break;
        }
        std::getline(bookFile, temp_authorName, ',');
        std::getline(bookFile, temp_authorSurname, ',');
        std::getline(bookFile, temp_genre, ',');
        std::getline(bookFile, temp_year, ',');
        std::getline(bookFile, temp_publisher, ',');
        std::getline(bookFile, temp_pagesNumber, '\n');




        book.setParameters(temp_bookName, temp_authorName, temp_authorSurname, temp_genre, stoi(temp_year), temp_publisher, stoi(temp_pagesNumber));
        m_bookList.push_back(book);
    }
    bookFile.close();

    std::sort(m_bookList.begin(), m_bookList.end(), [](Book& left, Book& right) {return left.getBookName() < right.getBookName(); });
}



void Rental::showAllBooks()
{
    for (int i = 0; i < m_bookList.size(); i++)
    {
        showBook(i);
    }
}

void Rental::showBook(int index)
{

    std::cout << index << " Book Name: " << m_bookList[index].getBookName() << " Author: " << m_bookList[index].getAuthorName() << " " << m_bookList[index].getAuthorSurname() << std::endl;

}

void Rental::addBook()
{

    Book book("", "", "", "", 0, "", 0);
    std::string temp_bookName, temp_authorName, temp_authorSurname, temp_genre, temp_year, temp_publisher, temp_pagesNumber;

    std::cout << "\nType Book Name: ";
    std::getline(std::cin, temp_bookName);
    std::cout << "\nType Author Name: ";
    std::getline(std::cin, temp_authorName);
    std::cout << "\nType Author Surname: ";
    std::getline(std::cin, temp_authorSurname);
    std::cout << "\nType Book Genre: ";
    std::getline(std::cin, temp_genre);
    std::cout << "\nType Year of issue: ";
    std::getline(std::cin, temp_year);
    std::cout << "\nType Publisher: ";
    std::getline(std::cin, temp_publisher);
    std::cout << "\nType Number of Pages: ";
    std::getline(std::cin, temp_pagesNumber);

    book.setParameters(temp_bookName, temp_authorName, temp_authorSurname, temp_genre, stoi(temp_year), temp_publisher, stoi(temp_pagesNumber));

    m_bookList.push_back(book);

    std::sort(m_bookList.begin(), m_bookList.end(), [](Book& left, Book& right) {return left.getBookName() < right.getBookName(); });
}

void Rental::deleteBook()
{
    
    std::string index;
    showAllBooks();
    std::cout << "\nType Position to delete: ";
    std::getline(std::cin, index);
    m_bookList.erase(m_bookList.begin() + stoi(index));

}

void Rental::searchBookListForAuthor(std::string name)
{
    for (int i = 0; i < m_bookList.size(); i++)
    {
        if (m_bookList[i].getAuthorSurname() == name)
        {
            showBook(i);
        }
    }
}

void Rental::reports()
{
    std::string command;
    std::string searchingSurname;
    std::cout << "\nChoose report to show:\n";
    std::cout << "1. Show all books by the same author\n";
    std::cout << "2. Go back \n";
    std::getline(std::cin, command);

    if (command == "1")
    {
        std::cout << "Type Author Surname: \n";
        std::getline(std::cin, searchingSurname);
        searchBookListForAuthor(searchingSurname);

        return;
    }

    if (command == "2")
    {
        return;
    }

}


void Rental::getBookList(std::vector<Book> &bookList)
{
    bookList = m_bookList;
}