/*
���� ��������� ������� �� �������� ���������. ����� 3.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//2 �������� ������� ���������� ��������. ��������� ����� �������� ������������ ��������� �������
void quest1() {

	// ��������� ��� ������� �������
	const int size = 5;
	int sum = 0;

	// ���� �������
	int arr1[size];
	int arr2[size];

	//������������� �������?
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

//������� ������ � ��� ���� ����������� ����� ��������� ��������� �������
void quest2() {

	// ��������� ��� ������� �������
	const int size = 5;
	int sum = 0;

	// ���� �������
	int arr[size];

	//������������� �������?
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

//������� 2������ ������ � ��� ���� ����������� ����� ��������� ��������� �������
void quest3() {

	// ��������� ��� ������� �������
	const int size = 5;
	int sum = 0;

	// ���� �������
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

//���������� ������� �����. ��������������� ������� (Aij -> Aji)
void quest4()
{
	// ��������� ��� ������� �������
	const int size = 5;
	int variable = 0;

	// ��� ������
	int arr[size][size];

	srand(4);

	//���������� �������
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	//�����������������
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

//���������� ������� �����. ��������� ������� �� ������� �������, ��� ������ ������� ������ ������ ������� � �.�.
void quest5()
{
	// ��������� ��� ������� �������
	const int size = 5;

	// ��� ������
	int arr[size][size];
	int newArr[size][size];

	srand(5);

	//���������� �������
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	//�������
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

//���������� ������� �����. ��������� ���� - ����� ������������ ��������� �������
void quest6()
{

	// ��������� ��� ������� �������
	const int size = 5;

	// ��� ������
	int arr[size][size];

	//������
	srand(6);


	//���������� �������
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand()%10;
			cout << arr[i][j] << " - i=" << i << ", j=" << j << " | ";
		}
		cout << endl;
	}

	//������ ������, ������ ������� ���������

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

//����� � ���������� ������� ���������� � ���������� �������, � ��� �� ��� ������� � ������
void quest7()
{
	system("chcp 1251>nul");

	// ��� ������
	int arr[10];

	//������
	srand(7);

	//���������� �������
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

	cout << "���������� �������� = " << max << " � ������� ������� [" << posmax << "]" << endl;
	cout << "���������� �������� = " << min << " � ������� ������� [" << posmin << "]" << endl;

	system("pause>nul");
}
	//��������� ����������� ������������ � ���������� �������� �������. ��� ������������ ������ ������������
void quest8()
{
	system("chcp 1251>nul");

	// ��� ������ � ������ ��� ����� ��������
	int arr[10];
	int newarr[10];
	// ��� ������������
	int step = 0;
	//����� ������� ��� ������������
	int temp = 0;

	//������
	srand(8);

	//���������� �������
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " - i=" << i << " | ";
	}

	cout << endl << "������� ��� ������������ � ����: " << endl;
	cin >> step;


	for (int i = 0; i < 10; i++)
	{
		temp = i + step;
		//������������ ��������, ���� ������ ������ ��� ������
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

//��������� ������ ����������� �����. ����� ������� � ������ ����.
//����������� - ����� ������������� �����. ������, �� �� ����� ���� � 0. ������ �� �������� - � �������
void quest9()
{
	system("chcp 1251>nul");

	// ��� ������ � ������ ��� ����� ��������
	int arr[10][10];
	//����� ��� �����������
	int numb = 1;

	//���������� �������
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

//���� �����, ������ ������ ���� � ����� ����� �������
void quest10()
{
	system("chcp 1251>nul");

	// ��� ������ � ������ ��� ����� ��������
	int arr[10][10];
	//����� ��� �����������
	int numb = 1;

	//���������� �������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[j][i] = numb++;
		}
	}

	//����������� �������
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

//���������� ������� � ���������� �� ��������� - ���������, ��������� ����
void quest11() {

	// ��� ������ � ������ ��� ����� ��������
	int arr[10][10];

	//���������� ������� ������ � ������� ��������� ���������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[j][i] = i==j ? 1 : 0;
		}	
	}

	//������ ���� ��� ���������� ������ ���������. ����� ���� �� ��������� �������� ������ � ��� ��� �������� �� ������� ���������)))
	for (int i = 0, j = 9; i < 10 || j > 0; i++, j--)
	{
		arr[i][j] = 1;
	}

	//���������
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

//���������� ����������� ������������� ������ (������ ���������� ����� � ��������). �[m][n] * �[n][l] = �[m][l], ��� C[i][j] = A[i][k] * B[k][j] (� - ��������).
void quest12() {};

//���������� ������ ��������� ��������
void quest13() {

	system("chcp 1251>nul");

	char str[12] = "Hello world";

	cout << "������ ��������: " << str << endl << "������ ��������: ";

	for (int i = 11; i >= 0; i--)
	{
		cout << str[i];
	}

	cout << endl;

	system("pause>nul");

};

//��������� ������ ��������� �����. ������� ���������� ������ �� ���������� ��� ���������� ���������
void quest14() {

	// ��������� ��� ������� �������
	const int size = 10;

	// ��� ������
	int arr[size][size];
	
	//���������� ������
	int arr_min[size];
	int arr_max[size];

	//������
	srand(14);

	//���������� �������
	for (int i = 0; i < size; i++)
	{
		
		//�������� ����������
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

//� ���������� ������� ��������� ����� � �� �����.
void quest15() {

	system("chcp 1251>nul");

	char str[100] = "Hello world! Today i start to learn C++ language!";
	int i = 0;
	int sum = 0;

	cout << "������ ��������: " << str << endl << "������� �������: ";

	while (str[i])
	{
		i++;
	}

	cout << i << endl << "������ �����: ";

	for (i = 0; str[i]; i++)
	{

		if (str[i] == ' ')
		{
			sum++;
		}
	}

	//��������� ��� 1 �.�. ��������� ������ - ������� ������ � ������� ����� �� ������������ �������� �� ������
	//�����, ��� ����� �� ����� ��������� 2� �������� � ����� �� ��������� ���������.
	cout << sum+1 << endl;

	system("pause>nul");

};

//������������ ������ � �������� �� �������. ������� �������� ��������� 123.....321
void quest16() {

	system("chcp 1251>nul");

	int random;

	cout << "������� ������������ �����:" << endl;
	cin >> random;

	srand(random);
	int size = rand() % 21;
	int *numbs = new int[size];

	cout << "������ �������: " << size << endl;

	for (int i = 0, j = size-1; i <= j; i++, j--)
	{
		numbs[i] = i + 1;
		numbs[j] = i + 1;
	}

	cout << "���������:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << numbs[i] << " ";
	}

	system("pause>nul");

};

//������� 3 ���������� �������. 2 ������� ��������� ���������� �������. �������� ������� ��� ������� �������� � 3� ������ �� ���������� �������
void quest17() {};

//2 ������� ������ ������ �� ���������� �������. 3� ������ �������� ����� �������� 2�. �������� � ������ �������� ���������� (��� ����� �������)
void quest18() {};

//2 ������������ ������� ���������� �����. ������ �����. 3� ������ ����� ������ ������ � �������.
void quest19() {};

//��������� �������� ������. ������. ���� ������� 2� ������, ��� ����� ������� ���� ������ � �������. ����� ������ � ����� ��� ������.
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