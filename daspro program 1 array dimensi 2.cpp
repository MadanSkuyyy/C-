/* Program berdimensi dua menampilkan informasi
perkembangan jumlah pendaftar mahasiswa
baru setiap tahun */
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int i,j;
int data_jual[3] [3];
for (i=0; i<=2; i++) {
for (j=0; j<=2; j++) {
cout << "Data ke-"<<i<<" "<<j<< endl;
cout << "Jumlah Penjualan: "; cin >> data_jual[i] [j];
}
}
cout <<"========================"<<endl;
cout << "Data Penjualan Per Tahun" << endl;
cout << " Sepeda Motor " << endl;
cout << "========================" << endl;
cout << "No 2003 2004 2005 " << endl;
cout << "========================" << endl;
for (i=0; i<=2; i++) {
cout << setiosflags(ios::left) << setw(5) << i;
for (j=0; j<=2; j++) {
cout << setiosflags(ios::right) << setw(4);
cout << data_jual[i] [j];
cout << " ";
}
cout << endl;
}
cout << "========================" << endl;
getch();
}
