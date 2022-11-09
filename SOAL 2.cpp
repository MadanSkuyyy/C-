//contoh program pemakaian if dalam if
#include <iostream>

using namespace std;

int main(){
	float x,y;
	cout<<"Masukkan nilai x = ";
	cin>>x;
	cout<<endl;
	cout<<"Masukkan nilai y = ";
	cin>>y;
	cout<<endl;
	
	if(x>0){
		if(y>0){
			cout<<"x dan y adalah bilangan positif "<<endl;
			cout<<"x bilangan positif = "<<x<<" dan y bilangan positif = "<<y;}
		else{
			cout<<"Diantara x dan y terdapat bilangan positif dan negatif"<<endl;
			cout<<"x bilangan positif = "<<x<<" dan y bilangan negatif = "<<y;}
	}else{
		cout<<"Diantara x dan y ada yang bernilai negatif";}
	
	return 0;
	
}
