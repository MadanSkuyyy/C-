#include<iostream>
#define maks 5

using namespace std;

int x[maks] = {5,2,4,1,3};

main(){
	int i, y[maks];
	for (i=0; i<maks; i++){
		y[i] = x[maks-(i+1)];	
	}
	for (i=0; i<maks; i++){
		cout<<y[i]<<endl;
	}
}
