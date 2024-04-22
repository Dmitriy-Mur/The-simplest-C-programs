#include <iostream>
using namespace std;

// Глобальная переменная с extern для демонстрации
extern int extern_var = 10;

int main() {
    // Автоматическая переменная (auto) внутри блока
    auto auto_var = 5;
    // Статическая переменная внутри функции
    static int static_var = 20;
    {
        // Автоматическая переменная (auto) во внутреннем блоке
        auto autov_var = 15;
    }
    // Использование глобальной переменной с extern
    cout << "Extern: " << extern_var << endl;
    // Использование автоматической переменной внутри функции
    cout << "Auto: " << auto_var << endl;
    // Использование статической переменной внутри функции
    cout << "Static: " << static_var << endl;
    return 0;
}