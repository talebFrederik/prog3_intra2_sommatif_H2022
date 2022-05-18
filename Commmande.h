#pragma once

#include <string>
#include <vector>

struct Commande
{
	int priorite{ 0 };
	std::vector<std::string> items;
};