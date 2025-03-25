#include <iostream>
#include <cstring>

int main() {
    char str[] = "Hello, this is a simple tokenization example.";
    char *token = strtok(str, " ,."); // Delimiters: space, comma, and period
    
    while (token != nullptr) {
        std::cout << token << std::endl;
        token = strtok(nullptr, " ,.");
    }
    
    return 0;
}
