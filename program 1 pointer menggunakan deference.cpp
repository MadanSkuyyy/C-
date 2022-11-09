//POINTER MENGGUNAKAN DEREFERENCE
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
int dewi, amir, *raka;
dewi = 89;
amir = dewi;
raka = &dewi;
cout <<"Nilai Dewi: " << dewi << endl;
cout <<"Nilai Amir: " << amir << endl;
cout <<"Nilai Raka: " << raka << endl;
getch();
}
