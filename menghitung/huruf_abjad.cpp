#include <iostream>
using namespace std;
int main() {
	char abjad = 'A';
	do {
		cout << abjad << endl;
		if (abjad == 'Z') {
			break;
		}
		abjad++;
	} while (abjad >= 'A');
	
	return 0;
}
