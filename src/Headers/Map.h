#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Map
{
private:
	std::vector<std::string> _map;
	

public:
	Map(std::string filepath);
	std::ifstream openFile(std::string file);
	void readfile(std::ifstream file);
	int get_size();
	std::vector<std::string> get_map();
};

