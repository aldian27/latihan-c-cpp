#include <iostream>
//	Kelas Terbuka | Belajar C++ [Dasar] - 09 - Tipe Data Fundamental
#include <limits>
using namespace std;
int main() 
{
	
//	Kelas Terbuka | Belajar C++ [Dasar] - 07 - Variabel
	/* bilangan bulat */
	int a, b, c;
	
//	Kelas Terbuka | Belajar C++ [Dasar] - 08 - Deklarasi dan Cin
	a = 1; /* deklarasi variabel */

//	Kelas Terbuka | Belajar C++ [Dasar] - 09 - Tipe Data Fundamental
	long nilai_long = 9; 
	short nilai_short = 7;
	unsigned int unsigned_int = 6; /* unsigned = tidak bertanda / tidak punya positif|negatif */
	
	/* bilangan desimal */
	float nilai_float = 2.5;
	double nilai_double = 5.0;
	
	/* character */
	char isi_char = 'a';
	
	/* boolean */
	bool hasil1, hasil2; /* true|false */
	
//	Kelas terbuka | Belajar C++ [Dasar] - 10 - Aritmatika
	int number1;
	int number2;
	int hasil;
	
	cout << "LATIHAN C++ \n"; /* cout berfungsi untuk memprint string/integer */
	cout << endl; /* endl berfungsi untuk mmembuat baris baru */
	
//	Kelas Terbuka | Belajar C++ [Dasar] - 03 - Memahami Program dan Compiler
	cout << "Memprint String : Hello World \n"; /* fungsi dari /n sama dengan endl */
	cout << endl;
	
//	Kelas Terbuka | Belajar C++ [Dasar] - 07 - Variabel
	cout << "Memprint nilai dari int a : " << a << endl;
	cout << endl;
	cout << endl;

//	Kelas Terbuka | Belajar C++ [Dasar] - 09 - Tipe Data Fundamental	
	cout << "Tipe-tipe data : \n";
	cout << endl;
	cout << "Bilangan Bulat \n";
	cout << "int : " << a << endl;
	cout << "long : " << sizeof(nilai_long) << " byte. nilai maksimum " << numeric_limits<long>::max() << ". nilai minimum " << numeric_limits<long>::min() << endl;
	cout << "short : " << sizeof(nilai_short) << " byte. nilai maksimum " << numeric_limits<short>::max() << ". nilai minimum " << numeric_limits<short>::min() << endl;
	cout << "unsigned int : " <<  "nilai maksimum " << numeric_limits<unsigned int>::max() << ". nilai minimum " << numeric_limits<unsigned int>::min() << endl;
	cout << endl;
	cout << "Desimal \n";
	cout << "float : " << nilai_float << endl;
	cout << "double : " << nilai_double << endl;
	cout << endl;
	cout << "character \n";
	cout << "char : " << isi_char << endl;
	cout << endl;
	cout << "boolean \n";
	cout << "bool : " << "true/false" << endl;
	cout << endl;
	cout << endl;
	
	cout << "Memprint besar data/memori dari variabel int a : " << sizeof(a) << " byte \n"; /* sizeof(nama_variabel) berfungsi untuk menampilkan besar data/memori dari variabel */
	cout << endl;
	cout << "Memprint nilai maksimum dari variabel int a : " << numeric_limits<int>::max() << endl; /* numeric_limits<int>::max() berfungsi untuk menampilkan nilai maksimum dari variabel */
	cout << endl;
	cout << "Memprint nilai minimum dari variabel int a : " << numeric_limits<int>::min() << endl; /* numeric_limits<int>::min() berfungsi untuk menampilkan nilai minimum dari variabel */
	cout << endl;
	cout << endl;
	
//	Kelas terbuka | Belajar C++ [Dasar] - 10 - Aritmatika
	cout << "Aritmatika \n";
	cout << "Bisa langsung atau bisa juga menggunakan variabel \n";
	cout << endl;
	
	//	Kelas Terbuka | Belajar C++ [Dasar] - 08 - Deklarasi dan Cin
	cout << "Memasukkan angka pertama : ";
	cin >> number1; /* cin berfungsi untuk memasukkan data */
	cout << "Angka pertama : " << number1 << endl;
	cout << endl;
	cout << "Masukkan angka kedua : ";
	cin >> number2;
	cout << "Angka kedua : " << number2 << endl;
	cout << endl;
	
	cout << "a = " << number1 << endl;
	cout << "b = " << number2 << endl;
	cout << endl;
	cout << "Penjumlahan \n";
	hasil = number1 + number2;
	cout << "Hasil dari a + b : " << hasil << endl; /* penjumlahan | operator : + */
	cout << endl;
	cout << "Pengurangan \n";
	hasil = number1 - number2;
	cout << "Hasil dari a - b : " << hasil << endl; /* pengurangan | operator : - */
	cout << endl;
	cout << "Perkalian \n";
	hasil = number1 * number2;
	cout << "Hasil dari a * b : " << hasil << endl; /* perkalian | operator : * */
	cout << endl;
	cout << "Pembagian \n";
	hasil = number1 / number2;
	cout << "Hasil dari a / b : " << hasil << endl; /* pembagian | operator : / */
	cout << endl;
	cout << "Modulus (sisa dari pembagian) \n";
	hasil = number1 % number2;
	cout << "Hasil dari a % b : " << hasil << endl; /* sisa dari pembagian | operator : %*/
	cout << endl;
	cout << "Urutan eksekusi \n";
	hasil = number1 + number2 * number1;
	cout << "Hasil dari a + b * a : " << hasil << endl; /* tanpa kurung */
	hasil = (number1 + number2) * number1;
	cout << "Hasil dari (a + b) * a : " << hasil << endl; /* dengan kurung */
	cout << endl;
	cout << endl;
	
//	Kelas terbuka | Belajar C++ [Dasar] - 11 - Komparasi
	cout << "Komparasi (boolean) \n";
	int bool_int1, bool_int2;
	bool_int1 = 2;
	bool_int2 = 2;
	hasil1 = (bool_int1 == bool_int2); /* sebanding */
	cout << "Jika nilai a dan b sama maka hasil nya adalah : " << hasil1 << " = true" << endl;
	bool_int2 = 3;
	cout << "Jika nilai a dan b tidak sama maka hasinya adalah : " << hasil1 << " = false" << endl;
	hasil2 = (bool_int1 != bool_int2); /* tidak sebanding */
	cout << "Jika kita memakai operator perbandingan != maka ketika nilai tidak sama hasilnya : " << hasil2 << " = true" << endl;
	hasil1 = (bool_int1 < bool_int2); /* kurang dari */
	hasil2 = (bool_int1 > bool_int2); /* lebih dari */
	cout << "Jika a kurang dari b maka hasilnya adalah : " << hasil1 << " = true" << endl;
	cout << "Jika a lebih dari b maka hasilnya : 1 = true. Karena a kurang dari b maka hasilnya : " << hasil2 << " = false" << endl;
	hasil = (bool_int1 <= bool_int2); /* kurang dari atau sama dengan */
	hasil = (bool_int1 >= bool_int2); /* lebih dari atau sama dengan */
	cout << endl;
	
//	Kelas terbuka | Belajar C++ [Dasar] - 12 - Operator Logika, and, or, dan not
	cout << "Operator Logika, and, or, dan not \n";
	hasil = !(bool_int1 == bool_int2); /* !() = not/bukan */
	cout << "Jika kita memakai operator logika !() maka ketika nilainya tidak sama hasilnya : " << hasil << " = true" << endl;
	cout << endl;
	
	bool_int2 = 2;
	hasil = (bool_int1 == 2) and (bool_int2 == 2);
	cout << "Jika kita memakai operator logika (and) maka ketika semua kondisi true sama hasilnya : " << hasil << "= true" << endl;
	
	cin.get();
//	NVitanovic | C++ Tutorial 1 - Your first program "Hello World"
	system("pause");
	return 0;
	
}
