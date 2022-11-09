#include<iostream>

using namespace std;

int main(){
	
	char plhn;
	string merk;
	int ukrn;
	long int jml, ppn, total, byr, uang_byr, kmbl, hrg;
	
	cout<<"================================================================================================"<<endl;
	cout<<"*** TOKO KELONGTONG SEGAR KEMBALI ***"<<endl;
	cout<<"================================================================================================"<<endl;
	cout<<"A. SUSU DANCOW"<<endl;
	cout<<"  1. UKURAN KECIL  ===========>> 15000"<<endl;
	cout<<"  2. UKURAN SEDANG ===========>> 26000"<<endl;
	cout<<"  3. UKURAN BESAR  ===========>> 45000"<<endl;
	cout<<"================================================================================================"<<endl;
	cout<<"B. SUSU BENDERA"<<endl;
	cout<<"  1. UKURAN KECIL  ===========>> 12000"<<endl;
	cout<<"  2. UKURAN SEDANG ===========>> 22000"<<endl;
	cout<<"  3. UKURAN BESAR  ===========>> 40000"<<endl;
	cout<<"================================================================================================"<<endl;
	cout<<"C. SUSU SGM"<<endl;
	cout<<"  1. UKURAN KECIL  ===========>> 20000"<<endl;
	cout<<"  2. UKURAN SEDANG ===========>> 38000"<<endl;
	cout<<"  3. UKURAN BESAR  ===========>> 70000"<<endl;
	cout<<"================================================================================================"<<endl;
	cout<<"PILIH MERK (A/B/C)? ";cin>>plhn;
	
	if(plhn != 'a' and plhn !='A' and plhn != 'b' and plhn !='B' and plhn != 'c' and plhn !='C'){
		cout<<endl<<"PILIHAN YANG ANDA MASUKKAN SALAH !!!"<<endl;
		exit(0);
	}else{
		cout<<"PILIH UKURAN (1/2/3)? ";cin>>ukrn;
	}
	
	
	if(plhn == 'a' or plhn =='A'){
		merk = "DANCOW";
		if (ukrn == 1){
			hrg=15000;
		}else if(ukrn == 2){
			hrg=26000;
		}else if(ukrn == 3){
			hrg=45000;
		}else{
			cout<<endl<<"UKURAN YANG ANDA MASUKKAN SALAH"<<endl;
			exit(0);
		}	
	}
	
	else if(plhn == 'b' or plhn =='B'){
		merk = "BENDERA";
		if (ukrn == 1){
			hrg=12000;
		}else if(ukrn == 2){
			hrg=22000;
		}else if(ukrn == 3){
			hrg=40000;
		}else{
			cout<<endl<<"UKURAN YANG ANDA MASUKKAN SALAH"<<endl;
			exit(0);
		}
	}

	else if(plhn == 'c' or plhn =='C'){
		merk = "SGM";
		if (ukrn == 1){
			hrg=20000;
		}else if(ukrn == 2){
			hrg=38000;
		}else if(ukrn == 3){
			hrg=70000;
		}else{
			cout<<endl<<"UKURAN YANG ANDA MASUKKAN SALAH"<<endl;
			exit(0);
		}
	}

	system("cls");
	cout<<"================================================================================================"<<endl;
	cout<<"  MEREK SUSU     : "<<merk<<endl;
	cout<<"  UKURAN         : "<<ukrn<<endl;
	cout<<"  HARGA          : "<<hrg<<endl;
	cout<<"  JUMLAH BARANG  : ";
	cin>>jml;
	cout<<"================================================================================================"<<endl;
	byr = hrg*jml;
	ppn = byr*0.1;
	total = hrg*jml + ppn;
	cout<<"  PEMBAYARAN     : "<<byr<<endl;
	cout<<"  PPN            : "<<ppn<<endl;
	cout<<"  TOTAL BAYAR    : "<<total<<endl;
	cout<<"  UANG BAYAR     : ";cin>>uang_byr;
	cout<<"================================================================================================"<<endl;
	kmbl = uang_byr - total;
	cout<<"  UANG KEMBALI   : "<<kmbl<<endl<<endl<<endl<<endl;
	cout<<" ****** TERIMA KASIH ANDA TELAH KE COUNTER KAMI ****** "<<endl<<endl;
	
	cin.get();
	
	return 0;	

}

