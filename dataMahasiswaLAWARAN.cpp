#include <iostream>

using namespace std;

int main(){
	char plhn;
	string nama[10], alamat[10];
	bool crud;
	long int nktp[10];
	
		
	cout<<"==============================*DATA MAHASISWA*==============================="<<endl;
	cout<<"A. TAMBAH DATA MAHASISWA"<<endl;
	cout<<"B. TAMPILKAN DATA MAHASISWA"<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"(A/B)? ";cin>>plhn;
	
	if(plhn != 'a' and plhn !='A' and plhn != 'b' and plhn !='B'){
		cout<<endl<<"PILIHAN YANG ANDA MASUKKAN SALAH !!!"<<endl;
		exit(0);
	}else{
		if(plhn == 'a' or plhn =='A'){
		crud = true;
		cout<<"A. TAMBAH DATA MAHASISWA"<<endl;
		cout<<"NAMA MAHASISWA (1) : ";cin>>nama[0];
		cout<<"ALAMAT             : ";cin>>alamat[0];
		cout<<"NIK E-KTP          : ";cin>>nktp[0];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (2) : ";cin>>nama[1];
		cout<<"ALAMAT             : ";cin>>alamat[1];
		cout<<"NIK E-KTP          : ";cin>>nktp[1];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (3) : ";cin>>nama[2];
		cout<<"ALAMAT             : ";cin>>alamat[2];
		cout<<"NIK E-KTP          : ";cin>>nktp[2];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (4) : ";cin>>nama[3];
		cout<<"ALAMAT             : ";cin>>alamat[3];
		cout<<"NIK E-KTP          : ";cin>>nktp[3];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (5) : ";cin>>nama[4];
		cout<<"ALAMAT             : ";cin>>alamat[4];
		cout<<"NIK E-KTP          : ";cin>>nktp[4];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (6) : ";cin>>nama[5];
		cout<<"ALAMAT             : ";cin>>alamat[5];
		cout<<"NIK E-KTP          : ";cin>>nktp[5];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (7) : ";cin>>nama[6];
		cout<<"ALAMAT             : ";cin>>alamat[6];
		cout<<"NIK E-KTP          : ";cin>>nktp[6];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (8) : ";cin>>nama[7];
		cout<<"ALAMAT             : ";cin>>alamat[7];
		cout<<"NIK E-KTP          : ";cin>>nktp[7];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (9) : ";cin>>nama[8];
		cout<<"ALAMAT             : ";cin>>alamat[8];
		cout<<"NIK E-KTP          : ";cin>>nktp[8];
		cout<<endl;
		
		cout<<"NAMA MAHASISWA (10): ";cin>>nama[9];
		cout<<"ALAMAT             : ";cin>>alamat[9];
		cout<<"NIK E-KTP          : ";cin>>nktp[9];
		cout<<endl;

	}
	system("cls");
	cout<<"==============================*DATA MAHASISWA*==============================="<<endl;
	cout<<"A. TAMBAH DATA MAHASISWA"<<endl;
	cout<<"B. TAMPILKAN DATA MAHASISWA"<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"(A/B)? ";cin>>plhn;
	
	if(plhn == 'b' or plhn =='B'){
		if(crud == true){
		cout<<"==============================*DATA MAHASISWA*==============================="<<endl;
		cout<<"B. TAMPILKAN DATA MAHASISWA"<<endl;
		cout<<"NAMA MAHASISWA1 : "<<nama[0]<<endl;
		cout<<"ALAMAT          : "<<alamat[0]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[0]<<endl<<endl;

		
		cout<<"NAMA MAHASISWA2 : "<<nama[1]<<endl;
		cout<<"ALAMAT          : "<<alamat[1]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[1]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA3 : "<<nama[2]<<endl;
		cout<<"ALAMAT          : "<<alamat[2]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[2]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA4 : "<<nama[3]<<endl;
		cout<<"ALAMAT          : "<<alamat[3]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[3]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA5 : "<<nama[4]<<endl;
		cout<<"ALAMAT          : "<<alamat[4]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[4]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA6 : "<<nama[5]<<endl;
		cout<<"ALAMAT          : "<<alamat[5]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[5]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA7 : "<<nama[6]<<endl;
		cout<<"ALAMAT          : "<<alamat[6]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[6]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA8 : "<<nama[7]<<endl;
		cout<<"ALAMAT          : "<<alamat[7]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[7]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA9 : "<<nama[8]<<endl;
		cout<<"ALAMAT          : "<<alamat[8]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[8]<<endl<<endl;
		
		cout<<"NAMA MAHASISWA10: "<<nama[9]<<endl;
		cout<<"ALAMAT          : "<<alamat[9]<<endl;
		cout<<"NIK E-KTP       : "<<nktp[9]<<endl<<endl;
		
		}else{
			cout<<"ANDA BELUM MEMBUAT DATA, SILAHKAN BUAT TERLEBIH DAHULU ";
			exit(0);
		}
	}	
	
}

return 0;
}
