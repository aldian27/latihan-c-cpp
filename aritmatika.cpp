#include <iostream>
using namespace std;
int main() {
	int angka1, angka2;
	char op;
	
	cout << "ARITMATIKA PEMROGRAMAN \n";
	cout << endl;
	cout << "Masukkan angka pertama = "; cin >> angka1;
	cout << "Masukkan angka kedua = "; cin >> angka2;
	cout << "Masukkan operator = "; cin >> op;
	
	switch (op) {
		case '+':
			cout << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
			break;
		case '-':
			cout << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
			break;
		case 'x':
			cout << angka1 << " x " << angka2 << " = " << angka1 * angka2 << endl;
			break;
		case '*':
			cout << angka1 << " x " << angka2 << " = " << angka1 * angka2 << endl;
			break;
		case '/':
			cout << angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
			break;
		case '%':
			cout << angka1 << " % " << angka2 << " = " << angka1 % angka2 << endl;
			break;
	}
	
	cin.get();
	return 0;
}
