#include<iostream>
#include<conio.h>
#include<iomanip>//setw has

using namespace std;

int main(){
	int size,line,column; //satir stun boyut
	
	cout<<"Enter the size: ";
	cin>>size;
	cout<<endl<<endl;
	for(int line=1 ; line<=size ; line++){
		for(int column=1; column<=size ; column++){
			cout<<setw(5)<<line*column;
		}
		cout<<endl;
	}
	
	
	getch();
	return 0;
}
