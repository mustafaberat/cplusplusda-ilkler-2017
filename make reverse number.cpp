//19.02.2018		Reverse Numbers
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>//sleep cls
using namespace std;
int find_reverse(int);

int main(){
	int number;

	cout<<"Enter the number: ";			cin>>number;
	if(number%2==0 || number%2==1){
	find_reverse(number);
	}
	else{
		cout<<"Enter the integet digit please"<<endl;
	}

	
	getch();
	return 0;
}



int find_reverse(int number){
	int reverse_number;
	do{
		reverse_number=number%10;
		cout<<reverse_number;
		number/=10;
	}while(number!=0);	
}
