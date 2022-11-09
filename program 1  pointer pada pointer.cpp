//POINTER PADA POINTER
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int dewi;
int *raka;
int **amir;
dewi = 89;
cout <<"Nilai Dewi: " << dewi << endl;
raka = &dewi;
amir = &raka;
cout <<"Nilai Raka hasil dari mengakses variabel Dewi: ";
cout << *raka << endl;
cout <<"Nilai Amir hasil dari mengakses variabel Dewi: ";
cout << **amir << endl;
getch();
}
