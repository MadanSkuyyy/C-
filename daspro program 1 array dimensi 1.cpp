//PROGRAM 1 ARRAY BERDIMENSI 1

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i;
    char nama[5][20];
    float nilai1[5];
    float nilai2[5];
    float hasil[5];
for (i=1; i<=2; i++) {
	cout << "Data ke- " << i << endl;
	cout << "Nama Mahasiswa: "; cin>>(nama[i]);
	cout << "Nilai UTS : "; cin >> nilai1[i];
	cout << "Nilai UAS : "; cin >> nilai2[i];
	hasil[i] = (nilai1[i] * 0.4) + (nilai2[i] * 0.6);
	cout << endl;
}
cout << "=======================================================";
cout << endl;
cout << "No.| Nama Mahasiswa |Nilai UTS |Nilai UAS |rata-rata| \n";
cout << "=======================================================";
cout << endl;
for (i=1; i<=2; i++) {
cout << setiosflags(ios::left) << setw(4) << i;
cout << setiosflags(ios::left) << setw(20) << nama[i];
cout << setprecision(2) << " " << nilai1[i];
cout << setprecision(2) << " " << nilai2[i];
cout << setprecision(2) << " " << hasil[i] << endl;
}
cout << "=======================================================";
cout << endl;
getch();
}

