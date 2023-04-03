#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "!\n";

    int number1, number2;
    char op;
    double result;

    std::cout << "Please enter your first number: ";
    std::cin >> number1;
    std::cout << "Please enter your second number: ";
    std::cin >> number2;
    std::cout << "What is the operation - Type one (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    default:
        std::cout << "Wrong operator";
        return 1;
        break;
    }

    std::cout << "Result for " << op << ": " << result << std::endl;
    return 0;
}