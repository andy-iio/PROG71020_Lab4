#include "draw.h"

//global draw() function

void drawItem(const std::string& fileName) {
	std::ifstream file(fileName);
	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	}
	else {
		std::cerr << "can't open the file named: " << fileName << std::endl;
	}
};
