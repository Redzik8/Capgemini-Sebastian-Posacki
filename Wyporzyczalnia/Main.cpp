
#include<iostream>
#include<string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Rental.h"

void addDataBase(Rental &tmpData)  // not finished function to write to file
{
       std::vector<Book> tmpBookList;
       tmpData.getBookList(tmpBookList);

       std::string writingString;

       std::ofstream backupFile;
       backupFile.open("BackupData.txt");

       for (int i = 0; i < tmpBookList.size(); i++)
       {
         //  tmpBookList[i].prepareParameters(writingString);
           backupFile << writingString << "\n";
       }

       backupFile.close();
}

int main()
{
    Rental rental;

    std::string command;

    std::vector<Book> bookList;
    std::fstream bookFile;

    rental.importBooksFromFile();

    while (1)
    {
        std::cout << "\nChoose action by typing proper number:\n";
        std::cout << "1. Show all books in collection\n";
        std::cout << "2. Add a book\n";
        std::cout << "3. Delete a book\n";
        std::cout << "4. Reports\n";
        std::cout << "To end programme, type 'end'\n";
        std::getline(std::cin, command);

    if (command == "1")
    {
        rental.showAllBooks();
    }

    if (command == "2")
    {
        rental.addBook();
    }

    if (command == "3")
    {
        rental.deleteBook();
    }

    if (command == "4")
    {
        rental.reports();
    }

    if (command == "end")
    {
        break;
    }
    } //end loop
}



