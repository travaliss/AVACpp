#include <iostream>

using namespace std;

//���������� �������� - ������� ���������� ����� � ��������� ��� � ������ � �.�.

int findSmallestPosition(int arr[], int startPosition, int arrLength) //������� ��� ���������� ������� ����������� �����
{
	int smallestPosition = startPosition;

	for (int i = startPosition; i < arrLength; i++)
	{
		if (arr[i] < arr[smallestPosition])
			smallestPosition = i;
	}

	return smallestPosition; //�������� ������� ����������� �����
}

void selectionSort(int arr[], int arrLength) //�������, ����������� ���������� ��������
{
	for (int i = 0; i < arrLength; i++)
	{
		int smallestPosition = findSmallestPosition(arr, i, arrLength);//������� ���������� �������� ��� ������ ��������� ������� (��� ������� �������) 
		swap(arr[i], arr[smallestPosition]); //������ ���������� ����� � ������ �� ��������� �������
	}

	return;
}

int main()
{
	int num; //������ �������
	cout << "Enter length of array: ";
	cin >> num; //��������� �� ������������ ������� �������

	int* arr = new int[num]; //��������� ������ ��� �������
	for (int i = 0; i < num; i++) //��������� ������ ����������
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