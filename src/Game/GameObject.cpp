#include "GameObject.h"

GameObject::GameObject()
{
	_position = { 0, 0 };
	_size = { 0, 0 };
	_color = sf::Color::White;
}

void GameObject::set_position(sf::Vector2f position)
{
	_position = position;
}

void GameObject::set_position(int x, int y)
{
	_position = {x, y};
}

void GameObject::set_size(sf::Vector2f size)
{
	_size = size;
}

void GameObject::set_size(int width, int height)
{
	_size = {width, height};
}

void GameObject::set_color(sf::Color color)
{
	_color = color;
}

void GameObject::set_color(int r, int g, int b, int a = 255)
{
	_color = {r, g, b, a};
}

sf::Vector2f GameObject::get_position()
{
	return (_position);
}

sf::Vector2f GameObject::get_size()
{
	return (_size);
}

sf::Color GameObject::get_color()
{
	return (_color);
}