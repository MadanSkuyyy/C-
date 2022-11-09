//program 1
//contoh penggunaan fungsi pust()


#include <conio.h>
#include <stdio.h>
#include <iostream>


int main (){
	char data1[15]; char data2[15];
	//INPUT NILAI
	puts("ketik nama pertama; "); 
	gets(data1);
	puts("ketik nama kedua; "); 
	gets(data2);
	printf("\n");
	//OUTPUT
	puts("namaku "); 
	printf("%s %s", data1, data2);
	getch();
}

