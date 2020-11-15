#include <iostream>
using namespace std;
int main(){
	string nama;
	float phi = 3.14;
	float l,r,k;
	
	cout << "Masukkan jari-jari : "; cin >> r;
	l = phi * r * r;
	cout << "Luas lingkaran adalah : " << l << "cm2 \n";
	cout << endl;
	k = 2 * phi * r;
	cout << "Keliling lingkaran adalah : " << k << "cm \n";
	
	system("pause");
	return 0;
}
