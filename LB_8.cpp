#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
//Вправа_1
void nsdEvclidNsk(const int&, const int&, int&, int&);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m;
	cout << "Введіть натуральне число n= ";
	cin >> n;
	while (n <= 0) {
		cout << "n має бути натуральним: ";
		cin >> n;
	}
	cout << "Введіть натуральне число m= ";
	cin >> m;
	while (m <= 0) {
		cout << "m має бути натуральним: ";
		cin >> m;
	}

	int nsd = 0, nsk = 0;

	nsdEvclidNsk(n, m, nsd, nsk);

	cout << "НСД = " << nsd << endl;
	cout << "НСК = " << nsk << endl;

	return 0;
}

void nsdEvclidNsk(const int& n, const int& m, int& refNsd, int& refNsk) {
	int a = n;
	int b = m;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	refNsd = a;

	refNsk = abs(n * m) / refNsd;
}

//Вправа_2 +++ бл ну для мене тяжко 
/*
int nsd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int nsk(int a, int b) {
	return abs(a * b) / nsd(a, b);
}

void funcPlus(int* arrayN, int* arrayD, int p, int a, int b) {
	int resChysl = 0;
	int resZnam = 1; // Знаменник не може бути 0, стартуємо з дробу 0/1

	for (int i = 0; i <= p; i++) { // Змінено на <= p
		int currentPower = p - i;

		// 1. Формуємо чисельник і знаменник поточного доданка
		// Додаємо round() для безпечного перетворення double у int
		int termChysl = arrayN[currentPower] * round(pow(a, currentPower));
		int termZnam = arrayD[currentPower] * round(pow(b, currentPower));

		// 2. Додаємо поточний дріб до загальної суми за математичними правилами
		int nextChysl = (resChysl * termZnam) + (termChysl * resZnam);
		int nextZnam = resZnam * termZnam;

		resChysl = nextChysl;
		resZnam = nextZnam;

		// ТУТ ВАРТО ВИКЛИКАТИ СКОРОЧЕННЯ (NSD), інакше числа переповнять int
	}

	cout << resChysl << '\n';
	cout << resZnam << '\n';
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int p = 0, a, b;
	cout << "Введіть:\n" << "p (p>=0) = ";
	cin >> p;
	while (p < 0) {
		cout << "Заново введіть p де p>=0: ";
		cin >> p;
	}

	int* n = new int[p+1];
	int* d = new int[p+1];
	int perevirka = 1;
	for (int i = 0; i <= p; i++) {
		cout << "n" << "[" << i << "] = ";
		cin >> n[i];
		cout << "d" << "[" << i << "] = ";
		cin >> d[i];
		cout << endl;
		perevirka *= d[i];
	}
	if (perevirka == 0) {
		cout << "Заново потрібно ввести d[0]..., бо добуток елементів d за умовою НЕ = нулю!";
		while(perevirka == 0) {
			perevirka = 1;
			for (int i = 0; i <= p; i++) {
				cout << "d" << "[" << i << "] = ";
				cin >> d[i];
				perevirka *= d[i];
			}
			cout << endl;
		}
	}
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	funcPlus((int* ) n, (int* ) d, p, a, b);

	return 0;
}*/

//Вправа_8   ---- спаси і сохрани
/*Описати функцію, що виконує обмін стовпців з номерами k1 і k2 у дійсній матриці A = (Aij)mn.
Використовуючи цю функцію, поміняти місцями в заданій дійсній матриці A розміром m*n стовпці, 
що містять найбільшу і найменшу кількість додатних елементів.*/

// A = {{a00, a01},
//	    {a10, a11}}
// версія 1 без ускладнення
/*
void swapCol(double a[][2], int const* n, int &k1, int &k2) {
	for (int i = 0; i < *n; i++) {
		double temp = a[i][k1];
		a[i][k1] = a[i][k2];
		a[i][k2] = temp;
	}

}

int main() {
	int const m = 2, n = 2;
	double a[2][2];
	int k1 = 0, k2 = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a" << i << j << ' ';
			cin >> a[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a" << i << j << ' ';
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}

	swapCol(a, &n, k1, k2);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a" << i << j << ' ';
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}

	return 0;
}
*/

 //Функція для обміну стовпців k1 та k2 у динамічній матриці
 //A - вказівник на масив вказівників (динамічна матриця)
//void swapCol(double** A, int m, int k1, int k2) {
//	for (int i = 0; i < m; i++) {
//		double temp = A[i][k1];
//		A[i][k1] = A[i][k2];
//		A[i][k2] = temp;
//	}
//}
//
//int main() {
//	int m, n;
//	cout << "Введіть кількість рядків (m) та стовпців (n): ";
//	cin >> m >> n;
//
//	// 1. Виділення пам'яті під динамічну матрицю
//	double** A = new double* [m]; // Створюємо масив вказівників (рядки)
//	for (int i = 0; i < m; i++) {
//		A[i] = new double[n];    // Для кожного рядка виділяємо масив елементів (стовпці)
//	}
//
//	cout << "Введіть елементи матриці:" << endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> A[i][j];
//		}
//	}
//
//	int max_pos = -1;
//	int min_pos = m + 1;
//	int k_max = 0;
//	int k_min = 0;
//
//	// Пошук стовпців
//	for (int j = 0; j < n; j++) {
//		int pos_count = 0;
//		for (int i = 0; i < m; i++) {
//			if (A[i][j] > 0) {
//				pos_count++;
//			}
//		}
//
//		if (pos_count > max_pos) {
//			max_pos = pos_count;
//			k_max = j;
//		}
//		if (pos_count < min_pos) {
//			min_pos = pos_count;
//			k_min = j;
//		}
//	}
//
//	cout << "\nНайбільше додатних у стовпці: " << k_max << " (кількість: " << max_pos << ")" << endl;
//	cout << "Найменше додатних у стовпці: " << k_min << " (кількість: " << min_pos << ")" << endl;
//
//	// Викликаємо функцію обміну
//	swapCol(A, m, k_max, k_min);
//
//	cout << "\nМатриця після обміну:" << endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << A[i][j] << '\t';
//		}
//		cout << endl;
//	}
//
//	// 2. Звільнення пам'яті (ОБОВ'ЯЗКОВО ДЛЯ ДИНАМІЧНИХ МАСИВІВ)
//	for (int i = 0; i < m; i++) {
//		delete[] A[i]; // Звільняємо кожен рядок
//	}
//	delete[] A;        // Звільняємо масив вказівників
//
//	return 0;
//}

//Самопрактика_1
/*
void fillAndPrint(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << "a" << i << ' ';
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
}

void findMinMax(int* array, int size, int* minVal, int& maxVal) {
	*minVal = array[0];
	maxVal = array[0];
	for (int i = 1; i < size; i++) {
		if (*minVal > array[i])
			*minVal = array[i];

		if (maxVal < array[i])
			maxVal = array[i];
	}
}

int main() {
	int size;
	cout << "size = ";
	cin >> size;

	int* array = new int[size];
	fillAndPrint(array, size);

	int minResult, maxResult;
	findMinMax(array, size, &minResult, maxResult);
	cout << "\nmin= " << minResult;
	cout << "\nmax= " << maxResult;
	delete[] array;

	return 0;
}*/

//Самопрактика_2   Функція, що створює і повертає динамічний масив
/*
int* createArray(int size) {    //Ця функція після завершення своєї роботи поверне значення типу `int*` (тобто адресу)
	int* array = new int[size];
	for (int i = 0; i < size; i++)
		array[i] = i + 1;
	return array;
}

int main() {
	int size;
	cout << "size = ";
	cin >> size;

	int* array = createArray(size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}

	delete[] array;
	return 0;
}*/

//Самопрактика_3  Зміна розміру масиву (Додавання елемента)
/*
void pushBack(int*& array, int& size, int newValue) {

	//Створити новий масив на 6 елементів.
	//Скопіювати туди старі 5 елементів.
	//Додати новий 6-й елемент у кінець.
	//Видалити старий масив (щоб не було витоку пам'яті).
	//Перенаправити наш вказівник на новий масив. 
	

	// 1. Створюємо новий масив, який на 1 більший за старий
	int* array2 = new int[size + 1];

	// 2. Копіюємо старі елементи (використовуємо старий size)
	for (int i = 0; i < size; i++) {
		array2[i] = array[i];
	}

	// 3. Записуємо нове значення у КІНЕЦЬ НОВОГО масиву
	// Оскільки індекси починаються з 0, останній індекс якраз дорівнює старому size
	array2[size] = newValue;

	// 4. Оновлюємо розмір (тепер він дійсно на 1 більший)
	size++;

	// 5. Видаляємо старий масив
	delete[] array;

	// 6. Перенаправляємо вказівник
	array = array2;
}

int main() {
	int size;
	cout << "size = ";
	cin >> size;

	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = i + 1;
		cout << array[i] << ' ';
	}

	pushBack(array, size, 99);

	cout << "\nМасив після додавання: ";
	for (int i = 0; i < size; i++) 
		cout << array[i] << ' ';


	delete[] array;
	return 0;
}
*/