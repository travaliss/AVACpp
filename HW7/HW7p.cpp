#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 100;
	int i = 0;
	int vi = 0;
	int number;
	setlocale(LC_ALL, "");
	cout << "Задумайте число N от 1 до 100, а я его угадаю!\n";
	while (vi != 3) {
		cout << "N больше " << a + (b - a) / 2 << "(1 да, 2 нет, 3 равно)?\n";
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
	cout << "Вы задумали " << number << "! А я молодец! Количество попыток: " << i << "\n";
	return 0;
}