//POINTER PADA ARRAY
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int i;
int nilai[5];
int *pnilai;
pnilai = nilai;
for(i=1; i<=5; i++) {
cout << "Masukkan nilai: "; cin >> nilai[i];
}
cout << endl;
cout << "Hasil proses pointer pada array";
cout << endl << endl;
for(i=1; i<=5; i++) {
cout << "Elemen "<< i <<". Nilai "<< nilai[i];
cout << ", berada di lokasi memori ";
cout << &pnilai[i];
cout << endl;
}
getch();
}
