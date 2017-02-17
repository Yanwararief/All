#include <fstream>
#include <iostream>
using namespace std;

int main () {

    char data [100];

    //buka file
    ofstream outfile;
    outfile.open("Test.txt");

    cout << "Writing to the file" <<
    cout << "Enter your name:  ";
    cin.getline(data, 100);

    // Tulis data ke file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // Tulis data ke file
    outfile << data << endl;

    //close file
    outfile.close();

    //Buka file
    ifstream infile;
    infile.open("Test.txt");

    cout << "Reading from the file";
    infile >> data;

    //Baca file dari data lalu tampilkan
    cout << data << endl;
    infile >> data;
    cout << data << endl;

    //close file
    infile.close();

    return 0;
}
