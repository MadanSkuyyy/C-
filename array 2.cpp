#include<iostream>

using namespace std;

main(){
	int tahun, kode_program;
	int data_lulus[4][3];
	
	// memberi data ke array
	data_lulus [0][0] = 80;
	data_lulus [0][1] = 540;
	data_lulus [0][2] = 1032;
	
	data_lulus [1][0] = 15;
	data_lulus [1][1] = 83;
	data_lulus [1][2] = 301;
	
	data_lulus [2][0] = 8;
	data_lulus [2][1] = 12;
	data_lulus [2][2] = 15;
	
	data_lulus [3][0] = 10;
	data_lulus [3][1] = 129;
	data_lulus [3][2] = 257;
	
	//proses untuk memperoleh jumlah mahasiswa lulus
	cout<<"Masukkan tahun dari data yang ingin anda ketahui : "<<endl;
	cout<<"1985 .. 1988 : ";
	cin>>tahun;
	cout<<"Masukkan kode program dari data"<<endl<<"yang ingin anda ketahui"<<endl;
	cout<<"1 = INTRO,  2 = BASIC,  3 = COBOL, 4 = dBASE : ";
	cin>>kode_program;cout<<endl;
	cout<<"Total kelulusan = "<<data_lulus[kode_program-1][tahun-1986];
	
	return 0;
}
