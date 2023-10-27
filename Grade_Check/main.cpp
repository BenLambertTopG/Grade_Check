#include <iostream>

int main()
{

    char Letter_Grade{};
    std::cout << "Please enter the letter of the grade you are aiming for: ";
    std::cin >> Letter_Grade;

    switch (Letter_Grade)
    {
    case 'a':
    case 'A':
        std::cout << "You need a score between 90-100";
        break;

    case 'b':
    case 'B':
        std::cout << "You need a score between 80-89";
        break;

    case 'c':
    case 'C':
        std::cout << "You need a score between 70-79";
        break;

    case 'd':
    case 'D':
        std::cout << "You need a score between 60-69";
        break;

    case 'e':
    case 'E':
        std::cout << "Why bother?";
        break;

    default:
        std::cout << "You entered an invalid grade!";
    }

    return 0;
}