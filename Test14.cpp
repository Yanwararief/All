#include <iostream>
using namespace std;

void print(int i) {
cout << "Printing int: " << i << endl;}

void print(double f) {
cout << "Printing float: " << f << endl;}

void print(string c) {
cout << "Printing character: " << c << endl;}

int main (void)  {
print(5);
print(500.263);
print("Hello C++");

return 0;

}
