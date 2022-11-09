#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main() {
int i,k,temp;
int L[5]; //jml data dlm array yg diurutkan
//Jumlah elemen dalam array ada 5
L[0]=1;
L[1]=9;
L[2]=17;
L[3]=3;
L[4]=7;
//Proses secara Ascending(naik)
for (i = 0; i <= 4; i++)
for (k = 4; k >= 0; k--)
if (L[k] < L[k-1]) { //proses membandingkan ascending
temp = L[k];
L[k] = L[k-1];
L[k-1] = temp;
}
//bagian menampilkan data setelah diurutkan
for (i=0; i<=4; i++)
cout << L[i] << endl;
getch();
}
