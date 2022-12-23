#include <iostream>
#include <string>
using namespace std;

int main() {
	string word, tire;
	char x;
	bool f;
	cout << "Enter a word: ";
	cin >> word;
	cout << endl;
	for (int i = 0; i < word.size(); i++) {
		tire += "-";
	}
	cout << tire << endl;
	int count = word.size();
	while (count > 0) {
		cout << "Enter a letter: ";
		cin >> x;
		cout << endl;
		f = false;
		for (int i = 0; i < word.size(); i++) {
			if (word[i] == x) {
				if (tire[i] != x) {
					f = true;
					count--;
					tire[i] = x;
				}
			}
		}
		if (f) {
			cout << "Guessed!" << endl;
			cout << tire << endl;
		}
		else {
			cout << "No such letter!" << endl;
			cout << tire << endl;
		}
	}
	cout << "You guessed the word - " << word << "! Congratulations!" << endl;
	return 0;
}