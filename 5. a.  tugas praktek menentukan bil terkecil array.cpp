/* menentukan bilangan terkecil dari PROGRAM 4*/
//MADAN ALUN ADZAN
//NIM : 20121023

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int x[10]= {45,34,23,34,32,12,65,76,34,23};
	int i;
	int min=1000;

for (i=0; i<10; i++) { 
    if (x[i]< min) {
	min= x[i]; }
}
cout << "Nilai MINIMAL dalam array: "<< min<<endl;

getch();

}
