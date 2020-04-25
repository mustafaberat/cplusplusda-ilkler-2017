#include<iostream>

using namespace std;

int main(){
	int a=9;	//kutu acildi icine 9 yazdi
	int *ptr; ///not *ptr bir kutu suan gosterdigi adres henuz yok
	ptr=&a;	//a nin degerini aldi yani icinde 1000 falan var
	
	cout<<"First a: "<<a<<endl;
	cout<<"Value of variable: "<<&a<<endl;
	cout<<"Value of variable: "<<ptr<<endl;
	
	*ptr=8;				// * oldugu icin degerini aldi oyle kodla ve icini degistirdi
	cout<<"Value of variable: "<<a<<endl;
	
	return 0;
}
