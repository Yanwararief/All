#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int a = 0;

	cout << "True = 1 dan False = 0" << endl;

   //Menentukan True dan False untuk Diskrit menggunakan While
   while(a < 2)
   {
       int b = 0;
       while(b < 2)
       { 
           int c = 0;
           while(c < 2)
           {
           		int d = 0;
           		while(d < 2)
           			{ cout << "a = " << a << ", b = " << b << ", c = " << c << " dan d = " << d << endl;
           			d++;
           		}
           		c++;
           }
           b++;
       }
       a++;       
   }
	//Perintah mengakhiri program
	return 0;
}