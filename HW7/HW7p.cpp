#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 100;
	int i = 0;
	int vi = 0;
	int number;
	setlocale(LC_ALL, "");
	cout << "��������� ����� N �� 1 �� 100, � � ��� ������!\n";
	while (vi != 3) {
		cout << "N ������ " << a + (b - a) / 2 << "(1 ��, 2 ���, 3 �����)?\n";
		cin >> vi;
		if (vi == 1) {
			a += (b - a) / 2;
		}
		else if (vi == 2) {
			b -= (b - a) / 2;
		}
		else {
			number = a + (b - a) / 2;
		}
		i++;
	}
	cout << "�� �������� " << number << "! � � �������! ���������� �������: " << i << "\n";
	return 0;
}