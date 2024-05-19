#pragma once
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Color.hpp>

#include "WindowManager.h";
#include "Map.h"

class GameManager
{
	WindowManager* m_window;
	sf::RenderWindow* _window;
	std::vector<Map *> _maps;
	

public:
	GameManager();
	void init();
	int gameLoop();
	void eventChecker(sf::Event evt);
	void drawObjects();
	void freeElements();
};

