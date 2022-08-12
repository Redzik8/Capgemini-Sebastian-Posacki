

#include "Game.h"

Game::Game(int id, std::string name, bool availability)
{
	m_id = id;
	m_name = name;
	m_availability = availability;
}

Game::~Game()
{

}

int Game::getId()
{
	return m_id;
}

std::string Game::getName()
{
	return m_name;
}

bool Game::getAvailability()
{
	return m_availability;
}

void Game::setParameters(int id, std::string name)
{
	m_id = id;
	m_name = name;
}

void Game::returnGame()
{
	m_availability = 1;
}

void Game::lendGame()
{
	m_availability = 0;
}