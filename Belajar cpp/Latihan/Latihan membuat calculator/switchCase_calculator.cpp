#include <iostream>
using namespace std;
int main() {
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat datang di program kalkulator \n \n";
	cout << endl;
	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout << "Pilih operator +,-,/,* : ";
	cin >> aritmatika;
	cout << "Masukkan nilai kedua : ";
	cin >> b;
	cout << "\nHasil perhitungan : ";
	
	switch (aritmatika) {
		case '+':
			hasil = a + b;
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;
		case '-':
			hasil = a - b;
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;
		case '*':
			hasil = a * b;
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;
		case '/':
			hasil = a / b;
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;
		default:
			cout << "Operator anda salah" << endl;
			break;
	}
	
	cin.get();
	return 0;
}
