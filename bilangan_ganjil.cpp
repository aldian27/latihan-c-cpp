#include <iostream>
using namespace std;
int main() {
	int nilai;
	
	cout << "Menampilkan bilangan ganjil \n";
	cout << "Masukkan nilai : "; cin >> nilai;
	
	for (int i = 1; i < nilai; i++) {
		if (i % 3 == 0) {
			cout << i << "  ";
		} else {
			continue;
		}
	}
}
