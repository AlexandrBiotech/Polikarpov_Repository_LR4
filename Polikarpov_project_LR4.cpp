#include <iostream>
using namespace std;

int X = 0;
int A = 0;

void Task1() {
    // Ввести натуральное число X
}

int Task2(int X) {
    int N;
    cout << "Введите цифру N (которая меньше числа разрядов числа X): ";
    cin >> N;

    // Проверка, что N меньше количества разрядов числа X
    int count = 0;
    int n = X;
    while (n != 0) {
        n /= 10;
        count++;
    }

    if (N >= count) {
        cout << "Ошибка: N должно быть меньше количества разрядов числа X." << endl;
        return -1; // Возвращаем -1 в случае ошибки
    }
    return N;
}

void Task3() {
    // Проверить отсутствие цифры A в числе X
}

void Task4() {
    // Проверить, встречается ли A более двух раз
}

int main() {
    int choice;
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Ввести натуральное число X" << endl;
        cout << "2. Ввести цифру A" << endl;
        cout << "3. Проверить отсутствие цифры A в числе X" << endl;
        cout << "4. Проверить, встречается ли A более двух раз" << endl;
        cout << "0. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Task1();
                break;
            case 2:
                Task2();
                break;
            case 3:
                Task3();
                break;
            case 4:
                Task4();
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}