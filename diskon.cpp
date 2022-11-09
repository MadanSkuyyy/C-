#include <iostream>

using namespace std;	

int main(){
	int diskon = 0;
	long int jml, total;
	char p;
	cout<<"JUMLAH HARGA BELANJA : ";cin>>jml;
	cout<<"PELANGGAN (Y/N)?: ";cin>>p;
	
	//cek pelanggan atau bukan
	if(p=='y' or p=='Y'){
		diskon = 0.1*jml;
	}else if(p=='n' or p=='N'){
		diskon = 0;
	}else{
		cout<<"PILIHAN YANG ANDA PILIH SALAH!!!";
		exit(0);
	}
	
	total = jml-diskon;
	cout<<"TOTAL BAYAR ADALAH = "<<total;
	
	return 0;
}
