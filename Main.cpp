#include <iostream>
#include <stdexcept>

class Calculator {
public:
    // Konstruktor
    Calculator(double num1, char oper, double num2) : number1(num1), operator1(oper), number2(num2) {}

    // Berechnungsfunktion
    double calculate() {
        switch (operator1) {
            case '+':
                return number1 + number2;
            case '-':
                return number1 - number2;
            case '*':
                return number1 * number2;
            case '/':
                if (number2 == 0) {
                    throw std::invalid_argument("ERROR: Division durch Null ist nicht erlaubt!");
                }
                return number1 / number2;
            default:
                throw std::invalid_argument("ERROR: Ungültiger Operator!");
        }
    }

private:
    double number1;
    char operator1;
    double number2;
};

int main() {
    double number1 = 0;
    char operator1;
    double number2 = 0;

    std::cout << "Gebe die erste Zahl ein: ";
    std::cin >> number1;

    std::cout << "Gebe deinen Operator ein (+, -, *, /): ";
    std::cin >> operator1;

    std::cout << "Gebe die zweite Zahl ein: ";
    std::cin >> number2;

    try {
        Calculator calc(number1, operator1, number2);
        double result = calc.calculate();
        std::cout << "Ergebnis: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
