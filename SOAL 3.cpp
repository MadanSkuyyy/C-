//contoh program pemakaian if bertingkat
#include <iostream>

using namespace std;

int main(){
	int kode_hari;
	cout<<"Menentukan hari"<<endl;
	cout<<"1 = SENIN"<<endl;
	cout<<"2 = SELASA"<<endl;
	cout<<"3 = RABU"<<endl;
	cout<<"4 = KAMIS"<<endl;
	cout<<"5 = JUM'AT"<<endl;
	cout<<"6 = SABTU"<<endl;
	cout<<"7 = MINGGU"<<endl;
	cout<<"Masukkan kode hari (1-7)? ";
	cin>>kode_hari;
	cout<<endl;
	
	if(kode_hari == 1){
		cout<<"Hari SENIN";
	}else if(kode_hari == 2){
		cout<<"Hari SELASA";
	}else if(kode_hari == 3){
		cout<<"Hari RABU";
	}else if(kode_hari == 4){
		cout<<"Hari KAMIS";
	}else if(kode_hari == 5){
		cout<<"Hari JUM'AT";
	}else if(kode_hari == 6){
		cout<<"Hari SABTU";
	}else if(kode_hari == 7){
		cout<<"Hari MINGGU";
	}else{
		cout<<"kode yang anda masukkan salah";
	}
	
	return 0;
	
}
