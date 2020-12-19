#include <iostream>
using namespace std;
int main() {
	for(int i = 100; i >= 50; i--) {
		if(i % 3 == 0) {
			cout << i << endl;
		} else if (i % 2 == 0) {
			continue;
		} else if (i == 50) {
			break;
		}
	}
}
