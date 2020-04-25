

#include<iostream>
#include<conio.h>
#include<vector>//bir class 

using namespace std;
//4. elamani a olursa gircek
int main(){
char c;

vector<char> password; //verktor tanimi
cout<<"Enter the letters: ";		

do{
	
	c=getchar(); //tek karakter alma cin olsa her harf icin enter gerekirdi
	password.push_back(c);

	
}while(c!='\n'); //enter girene kadar


cout<<"Length of the password: "<<password.size()-1;


if(password.at(3)=='a'|| password.at(3)=='A')			cout<<endl<<endl<<"Welcome Mustafa Berat"<<endl; //4.karakter a olmali


	getch();
	return 0;
}

