#include <iostream>

using namespace std;	

int main(){
	int umur;

	cout<<"PROGRAM MENENTUKAN USIA BERDASARKAN UMUR"<<endl;
	cout<<"MASUKKAN UMUR ANDA SAT INI : ";cin>>umur;
	
	//CEK YANG DIMASUKKAN INTEGER
	if(umur<0){
		exit(0);
	}
	
	if(umur<=10){
		cout<<"UMUR ANDA "<<umur<<endl<<"USIA ANDA ADALAH ANAK-ANAK";
	}
	else if(umur<=18){
		cout<<"UMUR ANDA "<<umur<<endl<<"USIA ANDA ADALAH REMAJA";
	}
	else if(umur<=35){
		cout<<"UMUR ANDA "<<umur<<endl<<"USIA ANDA ADALAH DEWASA";
	}
	else if(umur<=65){
		cout<<"UMUR ANDA "<<umur<<endl<<"USIA ANDA ADALAH PARUBAYA";
	}
	else{
		cout<<"UMUR ANDA "<<umur<<endl<<"USIA ANDA ADALAH TUA";
	}
	return 0;
}
