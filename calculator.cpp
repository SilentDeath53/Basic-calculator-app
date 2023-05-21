#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /, sqrt): ";
    std::cin >> op;

    if (op != 'sqrt') {
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }

    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Cannot divide by zero!" << std::endl;
                return 1;
            }
            break;
        case 'sqrt':
            if (num1 >= 0) {
                result = std::sqrt(num1);
            } else {
                std::cout << "Error: Cannot calculate square root of a negative number!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
