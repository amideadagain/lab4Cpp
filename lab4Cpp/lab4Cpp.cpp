#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using word_arr = std::vector<std::string>;

int main()
{
	word_arr words;
	std::string str = "dgd sgdf sgfgsd sdfg sfg sfgsgfsgfsdrg fse";
	std::stringstream stream(str);
	std::string temp;
	while (stream >> temp)
	{
		std::cout << temp << std::endl;
		words.push_back(temp);
	}
}
