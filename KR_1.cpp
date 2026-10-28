#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

bool simplN(int);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int const n = 5;
	int const m = 7;
	int array[n][m];
	int i, j;
	cout << "Введіть значення елементів масиву: " << '\n';
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << "a" << i << j << ' ';
			cin >> array[i][j];
		}
		cout << endl;
	}

	cout << "Отримана матриця: " << '\n';
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << "a" << i << j << ' ' << array[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	// Змінні для збереження значень та координат мін/макс елементів
	int minVal = 0, maxVal = 0;
	int min_i = -1, min_j = -1;
	int max_i = -1, max_j = -1;

	cout << "Всі елементи матриці, сума індексів яких є простим числом:\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (simplN(i + j)) {
				cout << "a" << i << j << "= " << array[i][j] << "; ";
				if (min_i == -1) { // якщо правда то ввожу перший елемент
					minVal = maxVal = array[i][j];
					min_i = max_i = i;
					min_j = max_j = j;

				}else {
					if (array[i][j] < minVal) {
						minVal = array[i][j];
						min_i = i;
						min_j = j;
					}
					if (array[i][j] > maxVal) {
						maxVal = array[i][j];
						max_i = i;
						max_j = j;
					}
				}
			}
		}
	}

	cout << "\n\nМінімум: a" << min_i << min_j << " = " << minVal << endl;
	cout << "Максимум: a" << max_i << max_j << " = " << maxVal << endl;
	int temp = array[min_i][min_j];
	array[min_i][min_j] = array[max_i][max_j];
	array[max_i][max_j] = temp;
	
	cout << "\nРезультуюча матриця:\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << "a" << i << j << ' ' << array[i][j] << '\t';
		}
		cout << endl;
	}

	return 0;
}

bool simplN(int sumIndex) {
	if (sumIndex <= 1)
		return false;

	for (int i = 2; i <= sqrt(sumIndex); i++) {
		if (sumIndex % i == 0)
			return false;
	}
	return true;
}