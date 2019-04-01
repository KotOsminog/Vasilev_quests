/*
Ниже приведены решения из учебника Васильева. Глава 3.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//2 числовых массива одинаковых размеров. Вычислить сумму попарных произведений элементов массива
void quest1() {

	// Константа для размера массива
	const int size = 5;
	int sum = 0;

	// Сами массивы
	int arr1[size];
	int arr2[size];

	//Инициализация рандома?
	srand(2);

	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;

		sum += arr1[i] * arr2[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	cout << sum << endl;

	system("pause>nul");

}

//Сделать массив и для него вычисляется сумма квадратов элементов массива
void quest2() {

	// Константа для размера массива
	const int size = 5;
	int sum = 0;

	// Сами массивы
	int arr[size];

	//Инициализация рандома?
	srand(2);

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;

		sum += arr[i] * arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << sum << endl;

	system("pause>nul");

}

//Сделать 2мерный массив и для него вычисляется сумма квадратов элементов массива
void quest3() {

	// Константа для размера массива
	const int size = 5;
	int sum = 0;

	// Сами массивы
	int arr[size][size];

	srand(3);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
		
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
			sum += arr[i][j] * arr[i][j];
		}

		cout << endl;

	}

	cout << sum;

	system("pause>nul");
}

//Квадратная матрица чисел. Транспонировать матрицу (Aij -> Aji)
void quest4()
{
	// Константа для размера массива
	const int size = 5;
	int variable = 0;

	// Сам массив
	int arr[size][size];

	srand(4);

	//Заполнение массива
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	//Транспорнирование
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j <= i) { continue; };

			variable = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = variable;
		}
		cout << endl;
	}

	int variable2 = size - 1;


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause>nul");

}

//Квадратная матрица чисел. Повернуть матрицу по часовой стрелке, где первый столбец станет первой строкой и т.д.
void quest5()
{
	// Константа для размера массива
	const int size = 5;

	// Сам массив
	int arr[size][size];
	int newArr[size][size];

	srand(5);

	//Заполнение массива
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	//Поворот
	for (int i = 0; i < size; i++)
	{
		for (int j = 0, k = size - 1; j < size; j++, k--)
		{
			newArr[i][k] = arr[j][i];
		}
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << newArr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause>nul");

}

//Квадратная матрица чисел. Вычислить СЛЕД - сумма диагональных элементов матрицы
void quest6()
{

	// Константа для размера массива
	const int size = 5;

	// Сам массив
	int arr[size][size];

	//рандом
	srand(6);


	//Заполнение массива
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand()%10;
			cout << arr[i][j] << " - i=" << i << ", j=" << j << " | ";
		}
		cout << endl;
	}

	//Массив собран, теперь подсчет диагонали

	int sum = 0;

	for (int i = 0, j = 0; i < size || j < size; i++, j++)
	{
		sum += arr[i][j];
	}

	cout << "Diagonal from left top to right down. \nSum for numbers from " << arr[0][0] << " to " << arr[size-1][size-1] << " is " << sum << endl;
	
	sum = 0;
	for (int i = 0, j = size-1; i < size || j > 0; i++, j--)
	{
		sum += arr[i][j];
	}

	cout << "Diagonal from right top to left down. \nSum for numbers from " << arr[0][size-1] << " to " << arr[size-1][0] << " is " << sum << endl;

	system("pause>nul");
}

//Найти в одномерном массиве наибольший и наименьший элемент, а так же его позицию в масиве
void quest7()
{
	system("chcp 1251>nul");

	// Сам массив
	int arr[10];

	//рандом
	srand(7);

	//Заполнение массива
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " - i=" << i << " | ";
	}

	cout << endl;

	int min = 0, posmin =0;
	int max = 0, posmax =0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			posmax = i;
			continue;
		}
		
		if (arr[i] < min || arr[i] == 0)
		{
			min = arr[i];
			posmin = i;
		}
	}

	cout << "Наибольшее значение = " << max << " в позиции массива [" << posmax << "]" << endl;
	cout << "Наименьшее значение = " << min << " в позиции массива [" << posmin << "]" << endl;

	system("pause>nul");
}
	//Выполнить циклическую перестановку в одномерном числовом массиве. Шаг перестановки вводит пользователь
void quest8()
{
	system("chcp 1251>nul");

	// Сам массив и массив для новых значений
	int arr[10];
	int newarr[10];
	// шаг перестановки
	int step = 0;
	//новая позиция при перестановке
	int temp = 0;

	//рандом
	srand(8);

	//Заполнение массива
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " - i=" << i << " | ";
	}

	cout << endl << "Введите шаг перестановки в ряду: " << endl;
	cin >> step;


	for (int i = 0; i < 10; i++)
	{
		temp = i + step;
		//корректируем смещение, если индекс больше чем массив
		if (temp > 9)
		{
			temp = temp % 10;
		}

		newarr[temp] = arr[i];

	}

	for (int i = 0; i < 10; i++)
	{
		cout << newarr[i] << " ";
	}
	
	cout << endl;

	system("pause>nul");

}

//Двумерный массив натуральных чисел. Слева направо и сверху вниз.
//Натуральные - целые положительные числа. Спорно, но им может быть и 0. Сделаю по классике - с единицы
void quest9()
{
	system("chcp 1251>nul");

	// Сам массив и массив для новых значений
	int arr[10][10];
	//Число для подстановки
	int numb = 1;

	//Заполнение массива
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = numb++;
			cout << arr[i][j] << " ";
		}

		cout << endl;

	}

	system("pause>nul");

}

//Тоже самое, только сверху вниз а потом слева направо
void quest10()
{
	system("chcp 1251>nul");

	// Сам массив и массив для новых значений
	int arr[10][10];
	//Число для подстановки
	int numb = 1;

	//Заполнение массива
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[j][i] = numb++;
		}
	}

	//Отображение массива
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause>nul");
}

//Квадратная матрица с элементами по диагонали - единицами, остальное нули
void quest11() {

	// Сам массив и массив для новых значений
	int arr[10][10];

	//Заполнение массива нолями и главную диагональ единицами
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[j][i] = i==j ? 1 : 0;
		}	
	}

	//Второй цикл для заполнения другой диагонали. Можно было бы зеркально отразить массив и ещё раз пройтись по главной диагонали)))
	for (int i = 0, j = 9; i < 10 || j > 0; i++, j--)
	{
		arr[i][j] = 1;
	}

	//Отрисовка
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;	
	}

	system("pause>nul");

};

//Вычисление произведени прямоугольных матриц (разное количество строк и столбцов). А[m][n] * В[n][l] = С[m][l], где C[i][j] = A[i][k] * B[k][j] (к - итератор).
void quest12() {};

//Символьный массив прочитать наоборот
void quest13() {

	system("chcp 1251>nul");

	char str[12] = "Hello world";

	cout << "Массив содержит: " << str << endl << "Читаем наоборот: ";

	for (int i = 11; i >= 0; i--)
	{
		cout << str[i];
	}

	cout << endl;

	system("pause>nul");

};

//Двумерный массив случайных чисел. Создать одномерный массив из наибольших или наименьших элементов
void quest14() {

	// Константа для размера массива
	const int size = 10;

	// Сам массив
	int arr[size][size];
	
	//Результаты работы
	int arr_min[size];
	int arr_max[size];

	//рандом
	srand(14);

	//Заполнение массива
	for (int i = 0; i < size; i++)
	{
		
		//Заполним пассажиров
		arr_min[i] = 99;
		arr_max[i] = 0;

		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "Results " << endl;

	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr_min[i] = (arr[j][i] < arr_min[i]) ? arr[j][i] : arr_min[i];
			arr_max[i] = (arr[j][i] > arr_max[i]) ? arr[j][i] : arr_max[i];
		}
	}

	cout << "Minimum: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr_min[i] << " ";
	}

	cout << endl <<"Maximum: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr_max[i] << " ";
	}

	cout << endl;

	system("pause>nul");

};

//В символьном массиве посчитать слова и их длину.
void quest15() {

	system("chcp 1251>nul");

	char str[100] = "Hello world! Today i start to learn C++ language!";
	int i = 0;
	int sum = 0;

	cout << "Массив содержит: " << str << endl << "Считаем символы: ";

	while (str[i])
	{
		i++;
	}

	cout << i << endl << "Теперь слова: ";

	for (i = 0; str[i]; i++)
	{

		if (str[i] == ' ')
		{
			sum++;
		}
	}

	//Добавляем ещё 1 т.к. последний символ - перенос строки и поэтому слово не отрабатываем проверку на пробел
	//Верим, что текст не может содержать 2х пробелов и текст не кончается пробелами.
	cout << sum+1 << endl;

	system("pause>nul");

};

//Динамический массив с размером из рандома. Сделать числовой полиндром 123.....321
void quest16() {

	system("chcp 1251>nul");

	int random;

	cout << "Введите произвольное число:" << endl;
	cin >> random;

	srand(random);
	int size = rand() % 21;
	int *numbs = new int[size];

	cout << "Размер массива: " << size << endl;

	for (int i = 0, j = size-1; i <= j; i++, j--)
	{
		numbs[i] = i + 1;
		numbs[j] = i + 1;
	}

	cout << "Полиндром:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << numbs[i] << " ";
	}

	system("pause>nul");

};

//Создать 3 одномерных массива. 2 массива заполнить случайными числами. Запсиать большее или меньшее значение в 3й массив из одинаковых позиций
void quest17() {};

//2 массива разной длинны со случайными числами. 3й массив размером суммы размером 2х. Запсиать в массив элементы поочередно (как карты смешать)
void quest18() {};

//2 динамических массива одинаковой длины. Рандом чисел. 3й массив вдвое больше первых и смешать.
void quest19() {};

//Двумерный числовой массив. Рандом. Надо сделать 2й массив, где будет удалена одна строка и столбец. Номер ввести с клавы или рандом.
void quest20() {};

//
int main() {

	//quest1();//+
	//quest2();//+
	//quest3();//+
	//quest4();//+
	//quest5();//+
	//quest6();//+
	//quest7();//+
	//quest8();//+
	//quest9();//+
	//quest10();//+
	//quest11();//+
	//quest12();
	//quest13();//+
	//quest14();//+
	//quest15();//+
	//quest16();//+
	//quest17();
	//quest18();
	//quest19();
	//quest20();

	return 0;
}