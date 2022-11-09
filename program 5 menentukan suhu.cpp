#include <conio.h>
#include <stdio.h>
#include <iostream>


using namespace std;


int main(){
	float suhu_udara[3];
	cout<<"ketik tiga data suhu udara"<<endl;
	
	for (int i=0; i<3; i++){
		cout<<i<<" :";
		cin>>suhu_udara[i];
	}
	cout <<"data suhu yang dimasukkan adalah : "<<endl;
	for (int i=0; i<3; i++) {
		cout<<suhu_udara[i];
		}
	getch();
}
