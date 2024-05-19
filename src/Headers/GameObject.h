#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>


class GameObject
{
private:
	sf::Vector2f _position;
	sf::Vector2f _size;
	sf::Color _color;

public:
	GameObject();

	void set_position(sf::Vector2f position);
	void set_position(int x, int y);
	void set_size(sf::Vector2f size);
	void set_size(int width, int height);
	void set_color(sf::Color color);
	void set_color(int r, int g, int b, int a);


	sf::Vector2f get_position();
	sf::Vector2f get_size();
	sf::Color get_color();
};

