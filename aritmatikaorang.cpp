#include <iostream>
using namespace std;

int main()

{



 float a , b , hasil ;

   char op ;

   cout << "masukan angka pertama  : " ;

   cin >> a ;

   cout << "masukan operasi hitung : " ;

   cin >> op ;

   cout << "masukan angka kedua    : " ;

   cin >> b ;

   switch (op) {

 case '+' :

    hasil = a + b ;

    break ;

 case '-' :

    hasil = a-b ;

    break ;

    case '*' :

    hasil = a*b ;

    break ;

    case '/' :

    hasil = a/b ;

    break ;

    default :

        cout << "invalid \n" ;



   }

 	cout << a << " "<< op << " " << b << " " << "=" << " " << hasil << endl;
	cin.get();
	system("pause");
	return 0;
}
