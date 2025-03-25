#include <iostream>
#include <string>
#include <cctype>

bool isValidInteger(const std::string &str)
{
    if (str.empty())
    {
        return false;
    }

    int start = 0;
    if (str[0] == '+' || str[0] == '-')
    {
        if (str.length() == 1)
        {
            return false; // Only a sign is not a valid integer.
        }
        start = 1;
    }

    for (int i = start; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isValidInteger(input))
    {
        std::cout << "\"" << input << "\" is a valid integer constant." << std::endl;
    }
    else
    {
        std::cout << "\"" << input << "\" is not a valid integer constant." << std::endl;
    }

    return 0;
}
