//program kalkulator sederhana
#include <conio.h>
#include <iostream>
using namespace std;
int main(){
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	//memilih operator kalkulator
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	//menginput pilihan operator
	cout<<"Masukan Pilihan : ";cin>>pil;
	//menginput angka yang akan di operasikan
	cout<<"Masukan Bilangan pertama : ";cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";cin>>bil2;	
	//program switch case
	switch(pil){
	    case 1 : hasil=bil1+bil2;
		    operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Maaf Operator yang Anda masukkan salah"<<endl;}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	getch();}
