#include <iostream>
#include<iomanip>

using namespace std;
struct mahasiswa{
	string nama, alamat;
	long int nktp;
};
	
void line();	

int main(){
	
	cobalagi:
	system("cls");
	//deklarasi
	int jumlahData;
	char cb;
	
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
	
	struct mahasiswa dataMahasiswa[jumlahData];
	
	//input
	for(int i=0; i<jumlahData; i++){
		cout<<"MAHASISWA KE-"<<i+1<<endl;
		cin.ignore();
		cout<<"NAMA MAHASISWA     : ";getline(cin,dataMahasiswa[i].nama);
		cout<<"ALAMAT MAHASISWA   : ";getline(cin,dataMahasiswa[i].alamat);
		cout<<"NO KTP MAHASISWA   : ";cin>>dataMahasiswa[i].nktp;
	}
	
	//output
	line();
	cout<<setiosflags(ios::left);
	cout<<setw(5)<<"NO"<<setw(35)<<"NAMA MAHASISWA"<<setw(35)<<"ALAMAT MAHASISWA"<<setw(35)<<"NO KTP MAHASISWA"<<endl;
	line();
	for(int i=0;i<jumlahData;i++){
		cout<<setw(5)<<i+1<<setw(35)<<dataMahasiswa[i].nama<<setw(35)<<dataMahasiswa[i].alamat<<setw(35)<<dataMahasiswa[i].nktp<<endl;
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


