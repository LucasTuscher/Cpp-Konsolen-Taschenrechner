#include <iostream>

int main() {

    double number1 = 0;
    char operator1;
    double number2 = 0;

    std::cout << "Gebe die erste Zahl ein:" << std::endl;
    std::cin >> number1;

    std::cout << "Gebe deinen Operator ein:" << std::endl;
    std::cin >> operator1;

    std::cout << "Gebe die zweite Zahl ein:";
    std::cin >> number2;

    switch (operator1) {
        case '+':
            if (number2 != 0) {
                double result = number1 + number2;
                std::cout << "Ergebnis:" << result << std::endl;
            } else {
                std::cout << "ERROR: Division durch Null ist nicht erlaubt!" << std::endl;
            }
            break;
        case '-':
            if (number2 != 0) {
                double result = number1 - number2;
                std::cout << "Ergebnis:" << result << std::endl;
            } else {
                std::cout << "ERROR: Division durch Null ist nicht erlaubt!" << std::endl;
            }
            break;
        case '*':
            if (number2 != 0) {
                double result = number1 * number2;
                std::cout << "Ergebnis:" << result << std::endl;
            } else {
                std::cout << "ERROR: Division durch Null ist nicht erlaubt!" << std::endl;
            }
            break;
        case '/':
            if (number2 != 0) {
                double result = number1 / number2;
                std::cout << "Ergebnis:" << result << std::endl;
            } else {
                std::cout << "ERROR: Division durch Null ist nicht erlaubt!" << std::endl;
            }
            break;
        default:
            std::cout << "ERROR: Es ist ein Fehler aufgetreten, da der Operator nicht gefunden wurde!" << std::endl;
    }

    return 0;
}
