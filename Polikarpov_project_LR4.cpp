#include <iostream>
using namespace std;

int X = 0;
int A = 0;

void Task1(int& X) {
    cout << "Введите натуральное число X: ";
    cin >> X;
    while (X <= 0) {
        cout << "Ошибка! Введите натуральное число (больше 0): ";
        cin >> X;
    }
}


void Task2(int& A) {
    cout << "Введите цифру A (0-9): ";
    cin >> A;
    while (A < 0 || A > 9) {
        cout << "Ошибка! Введите цифру (0-9): ";
        cin >> A;
    }
}

void Task3(int X, int A) {
    if (X == 0) {
        cout << "Ошибка! Сначала введите число X (пункт 1)" << endl;
        return;
    }

    bool exists = false;
    int temp = X;
    while (temp != 0) {
        if (temp % 10 == A) {
            exists = true;
            break;
        }
        temp /= 10;
    }

    cout << "Цифра " << A << (exists ? " ПРИСУТСТВУЕТ" : " ОТСУТСТВУЕТ")
        << " в числе " << X << endl;
}

void Task4(int X, int A) {
    if (X == 0) {
        cout << "Ошибка! Сначала введите число X (пункт 1)" << endl;
        return;
    }

    int count = 0;
    int temp = X;
    while (temp != 0) {
        if (temp % 10 == A) {
            count++;
        }
        temp /= 10;
    }

    cout << "Цифра " << A << " встречается " << count << " раз(а)" << endl;
    cout << "Встречается более двух раз: " << (count > 2 ? "ДА" : "НЕТ") << endl;
}

int main() {
    int choice;
    setlocale(LC_ALL, "rus");
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
                Task4(X, A);
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
