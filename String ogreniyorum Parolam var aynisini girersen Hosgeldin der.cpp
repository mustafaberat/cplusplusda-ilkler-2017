//16.02.2018 String ogreniyorum
#include <iostream>
#include <math.h>
#include<string>
//#include<ctype.h>//to lower to upper buyuk kucuk kontrol sadece char icin



using namespace std;



int main(){
	
string Password="necmi";
string input;

cout<<"Enter the password: ";				cin>>input;

if(Password==input){
	cout<<"Welcome your home holy Necmi"<<endl;
}

else if(Password!=input){
	cout<<"Sen Necmi Degilsin Git Burdan!"<<endl;
}



	return 0;
}
