#include <iostream>
#include <iomanip> // для std::setw
using namespace std;

int main() {
    int length, width;
    cout << "Enter snake's length: ";
    cin >> length;
    cout << "Enter snake's width: ";
    cin >> width;

    int num = 1; // начинаем с 1 для удобства

    for (int row = 0; num <= length; row++) {
        if (row % 2 == 0) {
            // Заполняем слева направо
            for (int i = 0; i < width && num <= length; i++) {
                cout << setw(3) << num++ << ' ';
            }
        } else {
            // Заполняем справа налево
            int temp = num + width - 1;
            for (int i = 0; i < width && temp <= length; i++) {
                cout << setw(3) << temp-- << ' ';
            }
            num += width; // переходим к следующему набору чисел
        }
        cout << endl; // переход на новую строку
    }

    return 0;
}
