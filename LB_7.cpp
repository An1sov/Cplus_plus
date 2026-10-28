#include <iostream>
#include <windows.h>
#include <cmath>
#include <vector>

using namespace std;
// Вправа_1

bool pifagorTr(int, int, int);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть натуральне число N: ";
    cin >> n;
    while (n <= 0) {
    	cout << "Введіть НАТУРАЛЬНЕ число N: ";
    	cin >> n;
    }

    for (int a = 1; a <= n; a++) {  //типу а=3, тоді
        for (int b = a; b <= n; b++) {  // буде починатися не з 1, а вже з 3 
            for (int c = b; c <= n; c++) {
                if (pifagorTr(a, b, c)) {
                    cout << "(" << a << ";" << b << ";" << c << ")" << endl;
                }
            }
        }
    }

    return 0;
}

bool pifagorTr(int a, int b, int c) {

    return (a * a + b * b) == (c * c);             
}


// Вправа_2 + (але масив зробив на 100 елементів, за умовою має = n....)
/*
double myPow(int, int);
void result(int, double[], double);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть натуральне число N: ";
    cin >> n;
    double array[100], x;
    for (int i = 0; i <= n; i++) {
        cout << "Введіть значення a" << i << ' ';
        cin >> array[i];
    }
    cout << "Введіть дійсне число Х: ";
    cin >> x;

    cout << "Результат обчислення: ";
    result(n, array, x);
    

    return 0;
}

void result(int n, double array[], double x) {
    double sum = array[0];
    for (int i = 1; i <= n; i++) {
        sum += array[i] * myPow(x, i);
    }
    cout << sum;
}

double myPow(int x, int i) {
    int resPow = 1;
    for (int j = 1; j <= i; j++)
        resPow *= x;
    return resPow;
}
*/

// Вправа_3 +
/*
double result(double, double);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, eps;
    cout << "Введіть число X, яке належить інтервалу -1 < X < 1: ";
    cin >> x;
    while (x <= -1 || x >= 1) {
        cout << "Введений X вийшов за інтервал" << '\n';
        cout << "Введіть число X, яке належить інтервалу -1 < X < 1: ";
        cin >> x;
    }
    cout << "Введіть значення eps: ";
    cin >> eps;

    cout << "Результат: " << result(x, eps) << endl;
    
    return 0;
}

double result(double x, double eps) {
    double term, xPow, sumFinal = 0;
    term = xPow = x;
    int n = 1;
    int sing = 1;

    while (fabs(term) > eps) {
        sumFinal += term;

        n++;
        xPow *= (x * x);
        sing = -sing;

        term = sing * (xPow / (2 * n - 1));
    }
    
    return sumFinal;
}
*/

// Вправа_4 -
/*
double funcSin(double);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, ny, eps;
    cout << "Введіть значення числа X: ";
    cin >> x;
    cout << "Введіть значення числа Ny(Ню) > 0: ";
    cin >> ny;
    while (ny <= 0) {
        cout << "Заново введіть значення числа Ny(Ню) > 0: ";
        cin >> ny;
    }
    cout << "Введіть значення eps: ";
    cin >> eps;

    funcSin(x, eps);
    return 0;
}

double funcSin(double x, double eps) {
    double term, xPow, sinSum = 0;
    term = xPow = x;
    int sing = 1;
    int n = 1;
    while (fabs(term)>eps {
        sinSum += term

        n++;
        xPow *= (x * x);
        sing = -sing;

        term = sing * (xPow / (2 * n - 1));
    }
    

}
*/
