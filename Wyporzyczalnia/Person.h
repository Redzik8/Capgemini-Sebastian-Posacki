#pragma once

#include <iostream>

class Person
{
public:
    Person(int code, std::string name, std::string surname = "", bool business = 0);
    ~Person();

    int getCode();
    int getGameId();
    std::string getName();
    std::string getSurname();
    bool getBusiness();
    void setParameters(int code, std::string name, std::string surname = "", bool business = 0);
    void setGame(int gameId);
    void removeGame();
    void prepareParameters(std::string &userData);

private:
 
    int m_code;
    std::string m_name;
    std::string m_surname;
    bool m_business;
    int m_gameId;

};