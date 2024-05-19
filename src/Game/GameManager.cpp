
#include "GameManager.h"

GameManager::GameManager()
{
	m_window = nullptr;
	_window = nullptr;
}

void GameManager::init()
{
	m_window = new WindowManager(1600, 600, "MarioLike");
	_window = m_window->get_window();
	_maps.push_back(new Map("../../src/Assets/Maps/map1.txt"));
}

void GameManager::drawObjects()
{
	_window->clear(sf::Color::Black);
	_window->display();
}

int GameManager::gameLoop()
{
	sf::Event evt;

	init();

	_window->setFramerateLimit(60);
	while (_window->isOpen())
	{
		while (_window->pollEvent(evt)) {
			eventChecker(evt);
		}
		drawObjects();
	}
	

	freeElements();
	return (0);
}

void GameManager::freeElements()
{
	delete(_window);
	for (auto var : _maps) {
		delete(var);
	}
}