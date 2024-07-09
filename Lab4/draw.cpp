#include "draw.h"

//global draw() function
void drawItem(const std::string& fileName) {
	std::ifstream file(fileName); 
	//if the file is open, print the contents line by line
	if (file.is_open()) { 
		std::string line;
		while (std::getline(file, line)) { //printing the lines while there are lines avaliable
			std::cout << line << std::endl;
		}
		file.close(); //close file when complete
	}
	else {
		std::cerr << "can't open the file named: " << fileName << std::endl;
	}
};
