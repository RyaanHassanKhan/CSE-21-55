#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("program.cpp"); // Replace with the actual file name
    std::string line;
    int lineCount = 0;
    
    if (file.is_open()) {
        while (std::getline(file, line)) {
            lineCount++;
        }
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
        return 1;
    }
    
    std::cout << "Number of lines: " << lineCount << std::endl;
    return 0;
}
