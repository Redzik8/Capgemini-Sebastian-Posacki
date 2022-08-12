 #pragma once

#include <iostream>

class Game
{
public:
    Game(int id, std::string name, bool availability = 1 );
    ~Game();

    int getId();
    std::string getName();
    bool getAvailability();
    void setParameters(int id, std::string name);
    void returnGame();
    void lendGame();

private:
    int m_id;
    std::string m_name;
    bool m_availability;

};