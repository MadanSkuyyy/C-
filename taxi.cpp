#include <iostream>

using namespace std;	

int main(){
	int km;
	long int biaya;
	
	cout<<"MASUKKAN KM BERAPA : ";cin>>km;
	
	if(km <= 1){
		biaya = 2500;
	}else if(km >= 2){
		biaya = 1800*(km-1)+2500;
	}

	cout<<"JARAK YANG DITEMPUH ADALAH : "<<km<<" KM"<<endl;
	cout<<"BIAYA YANG DITANGGUNG      : "<<biaya;
	
	return 0;
}
