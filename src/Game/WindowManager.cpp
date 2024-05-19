#include "WindowManager.h"

WindowManager::WindowManager(int width, int height, std::string name)
{
	create_window(width, height, name);
}

void WindowManager::create_window(int width, int height, std::string name)
{
	_window = new sf::RenderWindow(sf::VideoMode(width, height), name);

}

sf::RenderWindow* WindowManager::get_window()
{
	return _window;
}