//13.03.2018			21.20		Pointer Ornek
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
/*	char c='e';
	char *g=&c; // soyle ki: bir kare var icinde c var bu ise baska kare adresi degisik ama adresin icinde c nin adresi var*/
	
	int number1=9;
	int *n1=&number1;
	
	
	//amac number1 e dokunmadan pointer uzerinden degisiklik yapmak
	
	
	cout<<"The number: "<<*n1<<endl;	//fist value we did not changed
	
	*n1=8; //it means number1 is 8 from now on
	
	cout<<"The number: "<<*n1<<endl;
	
	
	
	getch();
	return 0;
}
