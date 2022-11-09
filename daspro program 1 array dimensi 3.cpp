/* program berdimensi tiga penjualan sepeda motor */
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main() {
int i,j,k;
int data_jual[2] [3] [2];
for (i=0; i<2; i++) {
for (j=0; j<3; j++) {
for (k=0; k<2; k++) {
cout << "Data tahun ke- " << i << endl;
cout << "Data ke-" << j << " "<< k << endl;
cout << "Jumlah Penjualan : ";
cin >> data_jual[i] [j] [k];
}
cout << endl;
}
cout << endl;
}
cout << endl;
cout << "Data Penjualan per tahun" << endl;
cout << "==================================="; cout << endl;
cout << "Tahun|Hasil ke| Tahun Penjualan ke "; cout << endl;
cout << "     |        |   I         II "; cout << endl;
cout << "==================================="; cout << endl;
cout << endl;
for (i=0; i<2; i++) {
for (j=0; j<3; j++) {
cout << setiosflags(ios::left) << setw(11) << i;
cout << setiosflags(ios::left) << setw(9) << j;
for (k=0; k<2; k++) {
cout << setiosflags(ios::right) << setw(5);
cout << data_jual[i] [j] [k];
cout << " ";
}
cout << endl;
}
cout << endl;
}
cout << "=================================="; cout << endl;
getch();
}
