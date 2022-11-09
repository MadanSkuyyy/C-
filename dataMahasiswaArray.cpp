#include <iostream>
#include<iomanip>

using namespace std;
	
void line();	

int main(){
	
	cobalagi:
	system("cls");
	
	//deklarasi
	int jumlahData;
	char cb;
	string alamat[100],nama[100];
	long int nktp[100];
	
	//output
	line();
	cout<<setw(56)<<"DATA MAHASISWA"<<endl;
	line();
	cout<<"JUMLAH DATA MAHASISWA : ";cin>>jumlahData;
	
	//apakah yang di input bentuk integer
	if(jumlahData<1){
		cout<<"PILIHAN SALAH..!!!";
		exit(0);
	}
	
	//input
	for(int i=0; i<jumlahData; i++){
		cout<<"MAHASISWA KE-"<<i+1<<endl;
		cin.ignore();
		cout<<"NAMA MAHASISWA     : ";getline(cin,nama[i]);
		cout<<"ALAMAT MAHASISWA   : ";getline(cin,alamat[i]);
		cout<<"NO KTP MAHASISWA   : ";cin>>nktp[i];
	}
	
	//output
	line();
	cout<<setiosflags(ios::left);
	cout<<setw(5)<<"NO"<<setw(35)<<"NAMA MAHASISWA"<<setw(35)<<"ALAMAT MAHASISWA"<<setw(35)<<"NO KTP MAHASISWA"<<endl;
	line();
	for(int i=0;i<jumlahData;i++){
		cout<<setw(5)<<i+1<<setw(35)<<nama[i]<<setw(35)<<alamat[i]<<setw(35)<<nktp[i]<<endl;
	}
	line();
	
	cout<<"COBA LAGI(Y/N)? ";cin>>cb;
	if(cb=='y' or cb=='Y'){
		goto cobalagi;
	}else if(cb=='n' or cb=='N'){
		line();
		cout<<"  PROGRAM SELESAI"<<endl;}
	else{cout<<"PILIHAN SALAH..!!!";exit(0);}

	return 0;
}

void line(){
	for(int i=0;i<100;i++){
		cout<<"=";
	}cout<<endl;
}


