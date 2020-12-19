#include <iostream>
using namespace std;
int main() {
	int a = 1;
	do {
		if (a % 3 == 0) {
			cout << a << endl;
		}
		a++;
	} while (a <= 50);
	return 0;
}
