#include <stdio.h>
void main() {
	int number;
	
	printf("Masukkan angka : ");
	scanf("%i", &number);
	
	if (number < 10) {
		if(number == 2) {
			printf("number adalah angka 2");
		} else {
			printf("number adalah bilangan kurang dari 10 tetapi bukan angka 2");
		}
	} else {
		printf("number lebih dari 10");
	}
}
