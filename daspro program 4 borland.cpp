#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int x[10]= {45,34,23,34,32,12,65,76,34,23};
	int i;
	int mak=-1000;

for (i=0; i<10; i++) { 
    if (x[i]> mak) {
	mak= x[i]; }
}
cout << "Nilai Maksimal dalam array: "<< mak<<endl;

getch();

}
