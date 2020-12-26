#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	while (b >= 0) {
		cout << "Masukkan angka yang akan ditambahkan. Jika ingin berhenti ketik 0 : "; cin >> b;
		a += b;
		cout << a << endl;
		if (b == 0) {
			break;
		}
	}
}
