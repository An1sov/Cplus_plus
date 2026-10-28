#include <iostream>

using namespace std;

int main() {

    // Вправа_1
    /*
    int a[51];
    // Індекси:   a[0]   a[1]   a[2]   a[3]   a[4]   a[5]   a[6]   a[7]   a[8]  ...  a[50]
    // Значення:   ?      1      1      2      2      3      4      5      6   ...   ?
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 50; i++)
        a[i] = a[i / 2] + a[i - 2];

    for (int i = 1; i <= 50; i++)
        cout << "a" << i << " = " << a[i] << '\n';
    */
    // Вправа_2 +
    /*
    int n;
    cout << "Введіть значення N, яке <= 15: ";
    cin >> n;
    while (n < 1 || n > 15) {
        cout << "!!! N, МЕНЕШЕ або ДОРІВНЮЄ 15: ";
        cin >> n;
    }
    double a[16] = { 0 }, b[16] = { 0 };
    for (int i = 1; i <= n; i++) {
        cout << "Введіть значення a" << i << ": ";
        cin >> a[i];
        cout << "Введіть значення b" << i << ": ";
        cin >> b[i];
    }

    double dobutk = 1;
    for (int i = 1; i <= n; i++) {
        dobutk *= a[i] + b[n - i + 1];
        cout << "i = " << i << " - dobutk= " << dobutk << '\n';
    }
    cout << endl << "Результат:" << dobutk;
    */

    // Вправа_3 + в напряг
    /*
    int n;
    cout << "Введіть натуральне число N, яке <= 100: ";
    cin >> n;
    while (n < 1 || n > 100) {
        cout << "\n ! число N, МЕНьШЕ або ДОРІВНЮЄ 100: ";
        cin >> n;
    }

    double currentValue;
    double minValue = 0;
    int min = -1;

    for (int i = 1; i <= n; i++) {
        cout << "Введіть a" << i << ": ";
        cin >> currentValue;

        if (currentValue > 0) {
            if (min == -1 || currentValue < minValue) {
                minValue = currentValue;
                min = i; // Зберігаємо номер найменшого додатного числа
            }
        }
    }

    cout << "\nРезультат: " << min << '\n';
    */

    //Вправа_4 зрозумів
    /*
    int n;
    cout << "Введіть натуральне число N, яке <= 100: ";
    cin >> n;
    while (n < 1 || n > 100) {
        cout << "\n ! число N, МЕНьШЕ або ДОРІВНЮЄ 100: ";
        cin >> n;
    }

    int array[100];
    int count = 0;
    bool is_prime = true;

    for (int i = 2; i <= n; i++){
        // Перевіряємо ділення на вже знайдені прості числа з масиву
        for (int j = 0; j < count; j++) {
            if (i % array[j] == 0) {
                is_prime = false; // Знайшли дільник, отже число не просте
                break;            // Зупиняємо внутрішній цикл
            }
        }
        // Якщо жодного дільника не знайдено, число просте
        if (is_prime) {
            array[count] = i; // Записуємо його в масив
            count++;          // Збільшуємо лічильник на 1
        }
    }

    cout << "\nПрості числа, що не перевищують " << n << ":\n";
    for (int j = 0; j < count; j++) {
        cout << array[j] << " ";
    }
    cout << '\n';
    */

    //Вправа_5 не доробив (лень)

    int n;
    cout << "Введіть натуральне число N, яке <= 100: ";
    cin >> n;
    while (n < 1 || n > 100) {
        cout << "\n ! число N, МЕНьШЕ або ДОРІВНЮЄ 100: ";
        cin >> n;
    }

    int a[101];
    for (int i = 0; i < n; i++) {
        cout << "Введіть значення a" << i << ": ";
        cin >> a[i];
    }

    bool hasDuplicates = false;

    for (int i = 0; i < 100; i++) {
        if (a[i + 1] == a[i]) 
            hasDuplicates = true;
    }




    return 0;
}