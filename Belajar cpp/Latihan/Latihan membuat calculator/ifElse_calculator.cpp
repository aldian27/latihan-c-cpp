#include <iostream>
using namespace std;
int main(){
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat datang di program kalkulator \n \n";
//	memasukkan input dari user
	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout << "Pilih operator +,-,/,* : ";
	cin >> aritmatika;
	cout << "Masukkan nilai kedua : ";
	cin >> b;
	
	cout << "\nHasil perhitungan : ";
	
	if (aritmatika == '+') {
		hasil = a + b;
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;
	} else if (aritmatika == '-') {
		hasil = a - b;
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;
	} else if (aritmatika == '/') {
		hasil = a / b;
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;
	} else if (aritmatika == '*') {
		hasil = a * b;
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;
	} else {
		cout << "Operator anda salah" << endl;
	}
	
	
	cin.get();
	return 0;
}
