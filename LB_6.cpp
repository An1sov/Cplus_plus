#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Вправа_1
	/*
	int n, i, j;
	cout << "Введіть натуральне число n <= 10: ";
	cin >> n;
	while (n > 10 || n <= 0) {
		cout << "Число n має бути від 1 до 10: ";
		cin >> n;
	}

	double a[10][10];
	// ввожу значення елементів матриці
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "a" << i << j << ' ';
			cin >> a[i][j];
		}
		cout << endl;
	}
	// вивів у вигляді матриці
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "a" << i << j << ' ' << a[i][j] << '\t';
		}
		cout << endl;
	}

	double b[10][10];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i <= j) {
				b[i][j] = a[i][j];
			}
			else {
				b[i][j] = -a[j][i];  // ! ji
			}
		}
	}
	// вивів у вигляді матриці
	cout << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "b" << i << j << ' ' << b[i][j] << '\t';
		}
		cout << endl;
	}
	*/

	//Вправа_2 +
	/*
	int n;
	cout << "Введіть натуральне число n <= 10: ";
	cin >> n;
	while (n > 10 || n <= 0) {
		cout << "Число n має бути від 1 до 10: ";
		cin >> n;
	}

	double array[10][10];
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		array[i][j] = rand() % 100; // щоб не вводити руцямі
	//	}
	//}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a" << i << j << '\t';
			cin >> array[i][j];
		}
		cout << endl;
	}

	//вивів матрицю
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//cout << "a" << i << j << ' ' << array[i][j] << '\t';
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}

	//Сума елементів якої з діагоналей більше, – головної або побічної?
	double sumMain, sumBich;
	sumMain = sumBich = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				sumMain += array[i][j];
			}
			if ((i + j) == (n - 1)) {
				sumBich += array[i][j];
			}
		}
	}

	cout << "Сума головної діагоналі: " << sumMain << '\n';
	cout << "Сума бічної діагоналі: " << sumBich << '\n';
	if (sumMain > sumBich) {
		cout << "Відповідь: " << 1;
	}
	else {
		cout << "Відповідь: " << -1;
	}
	*/

	//Вправа_3 +
	/*
	int m, n;
	cout << "Введіть натуральне число m (m <= 10): ";
	cin >> m;
	while (m > 10 || m < 1) {
		cout << "натуральне m (m <= 10): ";
		cin >> m;
	}
	cout << "Введіть натуральне n (n <= 10): ";
	cin >> n;
	while (n > 10 || n < 1) {
		cout << "натуральне число n (n <= 10): ";
		cin >> n;
	}

	double array[10][10];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a" << i << j << ' ';
			cin >> array[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a" << i << j << ' ' << array[i][j] << '\t';
		}
		cout << endl;
	}
	double sumMinCols = 0;
	for (int j = 0; j < n; j++) {
		double minCols = array[0][j];
		for (int i = 1; i < m; i++) { //перебир рядки в поточному стовпці, з 1 бо 0 уже взяв
			if (array[i][j] < minCols) {
				minCols = array[i][j];
			}
		}
		sumMinCols += minCols;
	}
	cout << "Сума найменших значень стовпців: " << sumMinCols << endl;
	*/

	//Вправа_4 +
	/*
	int m, n;
	cout << "Введіть натуральне число m (m <= 10): ";
	cin >> m;
	while (m > 10 || m < 1) {
		cout << "натуральне m (m <= 10): ";
		cin >> m;
	}
	cout << "Введіть натуральне n (n <= 10): ";
	cin >> n;
	while (n > 10 || n < 1) {
		cout << "натуральне число n (n <= 10): ";
		cin >> n;
	}

	int array[10][10];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a" << i << j << ' ';
			cin >> array[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a" << i << j << ' ' << array[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int count = 0;
			// Пробігаю по всіх стовпцях (k) у поточному рядку (i)
			for (int k = 0; k < n; k++) {
				if (array[i][j] == array[i][k]) {
					count++;
				}
			}
			if (count == 1) {
				array[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}
	*/

	//Вправа_5

	//int n;
	//cout << "Введіть натуральне число n <= 10: ";
	//cin >> n;
	//while (n > 10 || n <= 0) {
	//	cout << "Число n має бути від 1 до 10: ";
	//	cin >> n;
	//}

	//double array[10][10];
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << "a" << i << j << ' ';
	//		cin >> array[i][j];
	//	}
	//	cout << '\n';
	//}
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << "a" << i << j << ' ' << array[i][j] << '\t';
	//	}
	//	cout << '\n';
	//}

	//int rysunok;
	//cout << "Варіанти частин масивів (від 1 до 10): ";
	//cin >> rysunok;

	//double minVal = array[0][0];
	//int minIndexI = 0;
	//int minIndexJ = 0;
	//
	//switch (rysunok) {
	//case 1:
	//	for (int i = 0; i < n; i++) {
	//		for (int j = 0; j < n; j++) {
	//			if (i <= j) { // номер рядка має юути меньшим за номер стовпця
	//				if (array[i][j] < minVal) {
	//					minVal = array[i][j];
	//					minIndexI = i;
	//					minIndexJ = j;
	//				}
	//			}
	//		}
	//	}break;
	//case 2:
	//	for (int i = 0; i < n; i++) {
	//		for (int j = 0; j < n; j++) {
	//			if (i >= j) {
	//				if (array[i][j] < minVal) {
	//					minVal = array[i][j];
	//					minIndexI = i;
	//					minIndexJ = j;
	//				}
	//			}
	//		}
	//	}break;
	//case 3:
	//	
	//	break;
	//default: cout << "";
	//}
	//cout << "Мінімальний елемент у зафарбованій зоні: " << minVal << endl;
	//cout << "Його індекси - рядок: " << minIndexI << ", стовпець: " << minIndexJ << endl;
	//




// У наведеній нижче програмі здійснюється заміна від'ємних елементів двовимірного масиву нулями.

	const int m = 3;
	const int n = 3;
	double a[m][n] = { { 1,  -2,  3 },
					  { 2.1, 3, -4 },
					  { 0,-0.5, 11 } };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < 0)
				a[i][j] = 0;
		}
	}

	//вивід
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << '\n';
	}

	return 0;
}