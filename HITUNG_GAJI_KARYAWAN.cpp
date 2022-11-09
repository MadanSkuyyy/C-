#include<iostream>
#include<iomanip>

using namespace std;
//mendefinisikan struct
struct karyawan{
	string namaKaryawan;
	char golongan;
	int jmlAnak;
	int gajiPokok;
	int tunjanganAnak;
	int totalGaji;
};
//deklarasi fungsi
int gajiPokok(char golongan);
int tunjanganAnak(int jumAnak);
void line();

int main(){
	int jumlahData;
	int totalJumAnak=0,totalTunjanganAnak=0,totalPengeluaranGaji=0;
	cout<<"Jumlah Data : ";cin>>jumlahData;
	struct karyawan dataKaryawan[jumlahData];
	//input
	for(int i=0;i<jumlahData;i++){
		cout<<"Karyawan ke-"<<i+1<<endl;
		cin.ignore();
		cout<<"Nama Karyawan : ";getline(cin,dataKaryawan[i].namaKaryawan);
		cout<<"Golongan : ";cin>>dataKaryawan[i].golongan;
		cout<<"Jumlah Anak : ";cin>>dataKaryawan[i].jmlAnak;
		dataKaryawan[i].golongan = toupper(dataKaryawan[i].golongan);
		dataKaryawan[i].gajiPokok = gajiPokok(dataKaryawan[i].golongan);
		dataKaryawan[i].tunjanganAnak = tunjanganAnak(dataKaryawan[i].jmlAnak);
		dataKaryawan[i].totalGaji= dataKaryawan[i].gajiPokok + dataKaryawan[i].tunjanganAnak;
	}
	//output
	cout<<setiosflags(ios::left);
	cout<<setw(5)<<"No"<<setw(20)<<"Nama Karyawan"<<setw(5)<<"Gol"<<setw(20)<<"Gaji Pokok"<<setw(10)
		<<"jml.Anak"<<setw(20)<<"Tunj.Anak"<<setw(20)<<"Total Gaji"<<endl;
	line();
	for(int i=0;i<jumlahData;i++){
	cout<<setw(5)<<i+1<<setw(20)<<dataKaryawan[i].namaKaryawan<<setw(5)<<dataKaryawan[i].golongan<<setw(20)<<dataKaryawan[i].gajiPokok<<setw(10)
		<<dataKaryawan[i].jmlAnak<<setw(20)<<dataKaryawan[i].tunjanganAnak<<setw(20)<<dataKaryawan[i].totalGaji<<endl;
		totalJumAnak += dataKaryawan[i].jmlAnak;
		totalTunjanganAnak += dataKaryawan[i].tunjanganAnak;
		totalPengeluaranGaji += dataKaryawan[i].totalGaji;
	}
	line();
	cout<<"Total Jumlah Anak = "<<totalJumAnak<<" Anak"<<endl;
	cout<<"Total Tunj. Anak = Rp."<<totalTunjanganAnak<<endl;
	cout<<"Total Pengeluaran Gaji = Rp."<<totalPengeluaranGaji;
}
int gajiPokok(char golongan){
	if(golongan == 'A'){
		return 600000;
	}else if(golongan == 'B'){
		return 800000;
	}else if(golongan == 'C'){
		return 1200000;
	}
	return 0;
}
int tunjanganAnak(int jumAnak){
	if(jumAnak == 1 || jumAnak == 2){
		return jumAnak*300000;
	}else if(jumAnak>2) {
		return 800000;
	}
	return 0;
}
void line(){
	for(int i=0;i<98;i++){
		cout<<"=";
	}cout<<endl;
}
