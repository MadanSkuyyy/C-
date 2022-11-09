//contoh program untuk menentukan korting dengan if
#include <iostream>


using namespace std;

int main(){
	double total_pembelian, korting;
	cout<<"Total pembelian = Rp. ";
	cin>>total_pembelian;
	
	if(total_pembelian >= 50000){
		korting = 0.05*total_pembelian;
	}else{
		korting = 0;}
	cout<<"Besarnya korting adalah = "<<korting<<endl;
	cout<<"Total belanja = Rp. "<<total_pembelian - korting<<endl;
	
	return 0;
	
}
