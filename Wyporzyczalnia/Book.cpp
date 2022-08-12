#include "Book.h"

Book::Book(std::string bookName, std::string authorName, std::string authorSurname, std::string genre, int year, std::string publisher, int pagesNumber)
{
	m_bookName = bookName; 
	m_authorName = authorName;
	m_authorSurname = authorSurname;
	m_genre = genre;
	m_year = year;
	m_publisher = publisher;
	m_pagesNumber = pagesNumber;
}

Book::~Book()
{

}

std::string Book::getBookName()
{
	return m_bookName;
}

std::string Book::getAuthorName()
{
	return m_authorName;
}

std::string Book::getAuthorSurname()
{
	return m_authorSurname;
}

std::string Book::getGenre()
{
	return m_genre;
}

int Book::getYear()
{
	return m_year;
}

std::string Book::getPublisher()
{
	return m_publisher;
}

int Book::getPagesNumber()
{
	return m_pagesNumber;
}

void Book::setParameters(std::string bookName, std::string authorName, std::string authorSurname, std::string genre, int year, std::string publisher, int pagesNumber)
{
	m_bookName = bookName;
	m_authorName = authorName;
	m_authorSurname = authorSurname;
	m_genre = genre;
	m_year = year;
	m_publisher = publisher;
	m_pagesNumber = pagesNumber;
}