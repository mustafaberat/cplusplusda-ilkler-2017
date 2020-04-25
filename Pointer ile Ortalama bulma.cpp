#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;
int find_avarage(int *ptr);

int main(){
	
	int array[SIZE];
	for(unsigned i=0; i<SIZE ; i++){
	cout<<"Enter the number: ";		cin>>array[i];
	}
	
	find_avarage(array); //arraylerde ampersan kullanmak zorunda degilsin kullanirsan &(&array) mi ne yapman gerek
	
	getch();
	return 0;
}



int find_avarage(int *ptr){
	int total=0;
	
	for(unsigned i=0 ; i<SIZE ; i++){
		total+=*ptr;
		ptr++; //ilk adresine gitmisti pointer siradakine gitmek icin
	}
	
	cout<<"The avarage: "<<total/SIZE<<endl;
}


