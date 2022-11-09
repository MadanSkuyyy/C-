//contoh program pemakaian ternary
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
	
	switch(kode_hari){
		case 1 :
			cout<<"Hari SENIN";
			break;
		case 2 :
			cout<<"Hari SELASA";
			break;
		case 3 :
			cout<<"Hari RABU";
			break;
		case 4 :
			cout<<"Hari KAMIS";
			break;
		case 5 :
			cout<<"Hari JUM'AT";
			break;
		case 6 :
			cout<<"Hari SABTU";
			break;
		case 7 :
			cout<<"Hari MINGGU";
			break;
		default:
			cout<<"kode yang anda masukkan salah";
	}
	return 0;	
}
