#include "Map.h"

Map::Map(std::string filepath)
{
	readfile(openFile(filepath));	
}

std::ifstream Map::openFile(std::string filepath)
{
	std::ifstream file;
	file.open(filepath);

	if (file.is_open())
		std::cout << "file is open" << std::endl;

	return (file);
}

void Map::readfile(std::ifstream file)
{
	std::string line;
	int index = 0;

	if (file.is_open()) {
		std::cout << "Loading Map" << std::endl;
		while (file) {
			std::getline(file, line);
			_map.push_back(line);
			index += 1;
		}
	}
	file.close();
}

int Map::get_size()
{
	return (_map.size());
}

std::vector < std::string> Map::get_map()
{
	return (_map);
}

