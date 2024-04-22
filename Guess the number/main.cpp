#include <iostream>
#include <random>
#include <ctime>

int main() {
    int newNumber = -1;
    int sourceNumber;
    int stepCount;
    int recordStepCount;
    while (true) {
        srand(time(0));
        setlocale(LC_ALL, "Rus");
        std::cout << "Я загадал число от 0 до 100, отгадай его!\n";
        sourceNumber = rand() % 100;
        stepCount = 0;
        while (newNumber != sourceNumber) {
            stepCount++;
            std::cout << "Введи число: ";
            std::cin >> newNumber;
            if (newNumber > sourceNumber) {
                std::cout << "Загаданное число меньше твоего\n";
            }
            else if (newNumber < sourceNumber) {
                std::cout << "Загаданное число больше твоего\n";
            }
        }
        std::cout << "Ты выйграл!\n";
        std::cout << "Тебе потребовалось " << stepCount << " шагов\n";
        std::cout << "Нажми Enter, что бы продолжить...";
        std::cin >> newNumber;
        system("cls");
    }
}
