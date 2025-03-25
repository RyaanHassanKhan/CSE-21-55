#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

bool isOperator(char c) {
    string operators = "+-*/=<>!&|";
    return operators.find(c) != string::npos;
}

bool isSpecialCharacter(char c) {
    string specialChars = "{}[](),;";
    return specialChars.find(c) != string::npos;
}

int main() {
    ifstream file("input.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string token;
    char c;
    while (file.get(c)) {
        if (isspace(c)) {
            if (!token.empty()) {
                cout << "Token: " << token << endl;
                token.clear();
            }
        } else if (isOperator(c) || isSpecialCharacter(c)) {
            if (!token.empty()) {
                cout << "Token: " << token << endl;
                token.clear();
            }
            cout << "Token: " << c << " (Operator/Special Character)" << endl;
        } else {
            token += c;
        }
    }
    
    if (!token.empty()) {
        cout << "Token: " << token << endl;
    }

    file.close();
    return 0;
}
