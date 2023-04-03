#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "!\n";

    int number1;
    int number2;

    std::cout << "Please enter your first number: ";
    std::cin >> number1;
    std::cout << "Please enter your second number: ";
    std::cin >> number2;

    std::cout << "The sum of your two numbers is: " << (number1 + number2);
}