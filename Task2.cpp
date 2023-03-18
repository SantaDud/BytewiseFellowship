// Simple Badly Written Calculator

#include <iostream>
int main()
{
    char operation, choice;
    int num1, num2;
    do
    {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        
        std::cout << "Enter the second number: ";
        std::cin >> num2;
        
        std::cout << "Enter the operation(+, -, *, /): ";
        std::cin >> operation;
        
        switch (operation)
        {
        case '+':
            std::cout << "The sum is " << num1 + num2 << std::endl;
            break;
        
        case '-':
            std::cout << "The difference is " << num1 - num2 << std::endl;
            break;
        
        case '*':
            std::cout << "The product is " << num1 * num2 << std::endl;
            break;
        
        case 'x':
            std::cout << "The product is " << num1 * num2 << std::endl;
            break;
        
        case 'X':
            std::cout << "The product is " << num1 * num2 << std::endl;
            break;
        
        case '/':
            std::cout << "The quotient is " << num1 / num2 << std::endl;
            break;
        
        case '\\':
            std::cout << "The quotient is " << num1 / num2 << std::endl;
            break;
        
        default:
            std::cout << "Invalid Operation." << std::endl;
            break;
        }
        
        while (true)
        {
            std::cout << "Calculate again?(Y/N): ";
            std::cin >> choice;
        
            if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n')
                break;
        
            else
            {
                std::cout << "Invalid Choice" << std::endl;
                continue;
            }
        }
    } while (choice == 'y' || choice == 'Y');
}