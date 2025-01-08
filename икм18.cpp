#include <iostream>
#include <Windows.h> 
#include "Header.h" // Подключаем заголовочный файл

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введите n (больше 40): ";

    while (true) { // бесконечный цикл для обработки пользовательского ввода
        cin >> n;
        if (cin.fail() || n <= 40) { // проверяем, что ввод корректен и n больше 40
            cin.clear(); // сбрасываем флаг ошибки
            string m; // переменная для хранения оставшейся строки
            getline(cin, m); // читаем оставшуюся строку, чтобы очистить ввод
            cout << "Некорректный ввод! Пожалуйста, введите число больше 40: ";
        }
        else {
            break;
        }
    }

    string r = powerOfTwoMinusOne(n);
    cout << "Результат 2^" << n << " - 1 = " << r << endl;

    return 0;
}
