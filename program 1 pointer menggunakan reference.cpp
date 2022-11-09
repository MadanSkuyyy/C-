//POINTER MENGGUNAKAN REFERENCE
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int dewi, *amir, raka;
dewi = 89;
amir = &dewi;
raka = *amir;
cout <<"Nilai Dewi: " << dewi << endl;
cout <<"Nilai Amir: " << amir << endl;
cout <<"Nilai Raka: " << raka << endl;
getch();
}
