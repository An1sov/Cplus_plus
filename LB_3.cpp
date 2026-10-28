#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Вправа_1
   
    double x, eps, yNew, yOld;
    int i;
    cout << "Введіть додатне значення eps: ";
    cin >> eps;
    cout << "Введіть додатне значення Х: ";
    cin >> x;
    while (eps <= 0 || x <= 0) {
        cout << "Введіть ДОДАТНЕ значення eps: ";
        cin >> eps;
        cout << "Введіть  ДОДАТНЕ значення Х: ";
        cin >> x;
    }

    // Початкове значення за умовою y0 = x
    yNew = x;
    i = 0;                 
    do {
        i++; 
        yOld = yNew;  // Значення з попереднього члена фіксується у змінній yOld
        
        yNew = 0.5 * (yOld + x / yOld);

    } while (fabs(pow(yNew, 2) - pow(yOld, 2)) >= eps); // Цикл триває, ПОКИ різниця квадратів більша або дорівнює eps
    cout << "Перший член y_n, що задовільняє умову: " << yNew << endl;
    cout << "Номер (n): " << i << endl;
    
    return 0;
}