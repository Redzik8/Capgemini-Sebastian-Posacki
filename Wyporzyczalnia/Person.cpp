

#include "Person.h"
#include <string>

Person::Person(int code, std::string name, std::string surname, bool business)
{
	m_code = code;
	m_name = name;
	m_surname = surname;
	m_business = business;
}

Person::~Person()
{

}

int Person::getCode()
{
	return m_code;
}

std::string Person::getName()
{
	return m_name;
}

std::string Person::getSurname()
{
	return m_surname;
}

bool Person::getBusiness()
{
	return m_business;
}

int Person::getGameId()
{
	return m_gameId;
}

void Person::setParameters(int code, std::string name, std::string surname , bool business)
{
	m_code = code;
	m_name = name;
	m_surname = surname;
	m_business = business;
}

void Person::setGame(int gameId)
{
	m_business = 1;
	m_gameId = gameId;
}

void Person::removeGame()
{
	m_business = 0;
	m_gameId = 0;
}

void Person::prepareParameters(std::string &userData)
{
	userData = std::to_string(m_code) + "," + m_name + " " + m_surname;
	if (m_business == 1) 
	{
		userData += "," + std::to_string(m_business) + "," + std::to_string(m_gameId);
	}
	else
	{
		userData += ",,";
	}
}