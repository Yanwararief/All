#include <iostream>
using namespace std;
/*PROGRAM
// {i.s : Program Menunggu Masukan Angka}
// {f.s : Program Menampilkan Angka}
*/
//prototype
void swap (int x, int y);

int main () {
  //kamus
int a = 100;
int b = 200;
  //algoritma
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
swap (a, b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
return 0;

}

void swap (int x, int y) {
  int temp;

  temp = x;
  x = y;
  y = temp;
  return;
}
