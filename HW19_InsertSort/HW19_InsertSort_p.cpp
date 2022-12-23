#include <iostream>

using namespace std;

//сортировка вставкой - находим наименьшее число и переносим его в начало и т.д.

int findSmallestPosition(int arr[], int startPosition, int arrLength) //функция для нахождения позиции наименьшего числа
{
	int smallestPosition = startPosition;

	for (int i = startPosition; i < arrLength; i++)
	{
		if (arr[i] < arr[smallestPosition])
			smallestPosition = i;
	}

	return smallestPosition; //значение позиции наименьшего числа
}

void selectionSort(int arr[], int arrLength) //функция, реализующая сортировку вставкой
{
	for (int i = 0; i < arrLength; i++)
	{
		int smallestPosition = findSmallestPosition(arr, i, arrLength);//находим наименьшее значение для каждой стартовой позиции (все индексы массива) 
		swap(arr[i], arr[smallestPosition]); //меняем наименьшее число с числом на стартовой позиции
	}

	return;
}

int main()
{
	int num; //размер массива
	cout << "Enter length of array: ";
	cin >> num; //получение от пользователя размера массива

	int* arr = new int[num]; //выделение памяти для массива
	for (int i = 0; i < num; i++) //заполняем массив значениями
	{
		cin >> arr[i];
	}

	cout << "Input array: " << endl;
	for (int i = 0; i < num; i++)
		cout << arr[i] << '\t';
	cout << endl;

	selectionSort(arr, num);

	cout << "Sorted array: " << endl;
	for (int i = 0; i < num; i++)
		cout << arr[i] << '\t';
	cout << endl;
}