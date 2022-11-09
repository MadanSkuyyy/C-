//MADAN ALUN ADZAN 
//NIM : 20121023
//tugas praktek
//program menampilkan jumlah hari dalam setahun dgn data int jml_hari[12] berisi 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31

#include <conio.h>
#include <stdio.h>
#include <iostream>


using namespace std;


int main(){
	int jml_hari[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum;

    for(int i = 0; i < jml_hari[i]; i++){
        sum +=jml_hari[i];
    }

    // rata-rata tinggi badan
    float rata_rata = (float)sum;

    printf("JUMLAH HARI DALAM SETAHUN ADALAH : %.2f HARI\n", rata_rata);

    return 0;
}
