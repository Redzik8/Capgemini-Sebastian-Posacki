#pragma once

#include <iostream>

class Book
{
public:
    Book(std::string bookName, std::string authorName, std::string authorSurname, std::string genre, int year, std::string publisher, int pagesNumber);
    ~Book();

    std::string getBookName();
    std::string getAuthorName();
    std::string getAuthorSurname();
    std::string getGenre();
    int getYear();
    std::string getPublisher();
    int getPagesNumber();
    void setParameters(std::string bookName, std::string authorName, std::string authorSurname, std::string genre, int year, std::string publisher, int pagesNumber);

private:
    std::string m_bookName;
    std::string m_authorName;
    std::string m_authorSurname;
    std::string m_genre;
    int m_year;
    std::string m_publisher;
    int m_pagesNumber;
};