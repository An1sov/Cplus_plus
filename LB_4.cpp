#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    // M навпаки - оператор суми
    // П - символ добутку

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Вправа_1

    int n, i;
    double result, cos_sum, sin_sum;
    cout << "Введіть натуральне значення n: ";
    cin >> n;
    result = cos_sum = sin_sum = 0;

    for (i = 1; i <= n; i++) {
        cos_sum += cos(i + 1); // Додаємо cos(2) на 1-му кроці, cos(3) на 2-му і т.д.
        sin_sum += sin(i);     // Додаємо sin(1) на 1-му кроці, sin(2) на 2-му і т.д.

        result += cos_sum / sin_sum; // Ділимо поточний чисельник на знаменник і додаємо до загальної суми
    }

    cout << "Результат обчислення: " << result << endl;


    //Приклад_1 подібний вправі_1
    /*
    int n, i;
    double sum, cos_sum, sin_sum;
    cout << "Введіть натуральне значення n: ";
    cin >> n;
    sum = cos_sum = sin_sum = 0;
    for (i = 0; i <= n; i++) {
        sin_sum = sin_sum + sin(2 * i - 1);
        cos_sum = cos_sum + cos(2 * i - 1);
        sum = sum + sin_sum / cos_sum;
    }
    cout << "Результат обчислення: " << sum << endl;
    */
    //Приклад_2 подібний вправі_1
    /*
    int n, i;
    double sum, verh_sum, nyz_dob;
    cout << "Введіть нутеральне n: ";
    cin >> n;

    sum = verh_sum = 0;
    nyz_dob = 1;
    for (i = 1; i <= n; i++) {
        verh_sum += i;
        nyz_dob *= cos(i);
        sum = sum + verh_sum / nyz_dob;
    }
    cout << "Результат: " << sum;
    */

    //Вправа_2 +
    /*
    double x, a, sum;
    int n;
    cout << "Введіть знач Х: ";
    cin >> x;
    cout << "Введіть знач А: ";
    cin >> a;
    cout << "Введіть знач N: ";
    cin >> n;
    sum = x;

    for (int i = 0; i < n; i++) {
        sum = pow((sum + a), 2);
    }
    sum += a;
    cout << "Результат: " << sum;
    */

    //Вправа_3 +
    /*
    double x, sum;
    int n;
    cout << "Введіть знач Х: ";
    cin >> x;
    cout << "Введіть знач N: ";
    cin >> n;

    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + cos(pow(x, i));
    }

    cout << "Результат: " << sum;
    */

    //Вправа_4 +
    /*
    double x, sum;
    int n;
    cout << "Введіть знач Х: ";
    cin >> x;
    cout << "Введіть знач N: ";
    cin >> n;

    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + pow(cos(x), i);
    }

    cout << "Результат: " << sum;
    */

    //Вправа_8 +
    /*
    int n, i;
    double dobutk, fact;
    cout << "Введіть натуральне число N, яке >= за 2: ";
    cin >> n;
    while (n < 2) {
        cout << "!!! Число n має бути >= 2";
        cin >> n;
    }
    
    dobutk = fact = 1;
    for (i = 2; i <= n; i++) {
        fact = fact * i;
        dobutk = dobutk * pow(1 - (1 / fact), 2);
    }
    cout << "Результат: " << dobutk;
    */
    
    //Вправа_9 +
    /*
    double x, dobutk, sum_verh, sum_nyz, fakt;
    int n, k;
    cout << "Введіть натуральне число N: ";
    cin >> n;
    cout << "Введіть число X: ";
    cin >> x;
    dobutk = fakt = 1;

    for (k = 1; k <= n; k++) {
        sum_verh = pow(1 - x,k + 1) + 1;
        sum_nyz = pow((fakt + 1), 2);
        dobutk = dobutk * (sum_verh / sum_nyz);

        fakt = fakt * k;
    }
    cout << "Результат: " << dobutk;
    */

//Вправа_10

    //Вправа_17 +
    /*
    double a, b, sum;
    sum = 0;
    
    for (int i = 1; i <= 30; i++) {
        if (i % 2 != 0){
            a = i;
            b = pow(i, 2);
        }
        else {
            a = i / 2;
            b = pow(i, 3);
        }
        cout << "Отримана ітерація А: " << a << '\n';
        cout << "Отримана ітерація B: " << b << '\n';

        sum += pow((a - b), 2);
    }
    cout << '\n' << "Результат: " << sum;
    */

    
    return 0;
}