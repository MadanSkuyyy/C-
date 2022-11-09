//contoh program pemakaian ternary
#include <iostream>

using namespace std;

int main(){
	float nilai1, nilai2, maks;
	
	cout<<"Masukkan nilai 1 = ";
	cin>>nilai1;
	cout<<"Masukkan nilai 2 = ";
	cin>>nilai2;
	cout<<endl;
	
	maks = (nilai1>nilai2) ? nilai1 : nilai2;
	
	cout<<"Nilai terbesar adalah = "<<maks;
	
	return 0;

}
