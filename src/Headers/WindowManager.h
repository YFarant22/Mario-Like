#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

#pragma once
class WindowManager
{
	sf::RenderWindow* _window;

public:
	WindowManager(int width, int height, std::string name);
	void create_window(int width, int height, std::string name);
	sf::RenderWindow* get_window();
	
};

