//16.02.2018

#include<iostream>
#include<unistd.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){

int take_number;
int true_number;
int count_trying=0;
int seconds;



seconds=rand();
srand(seconds); //YA DA SRAND(TIME(NULL)) YAZABILIRIZ
true_number=rand()%100+1;




	do{
cout<<"Enter the number[1-100]: "; 			cin>>take_number;

if(take_number>100 || take_number<1){
	cout<<"You should enter a possible number [1-100]";
	continue;
}

 else if(take_number==true_number){
	cout<<"You were great! You tried only "<<count_trying<<" times"<<endl;
}

else if(take_number!=true_number){
	count_trying+=1; //count ++ because it is wrong
	if(true_number<take_number){
		cout<<"You should enter smaller number!"<<endl;
	/*	sleep(2);
		system("cls");*/
	}
	else if(true_number>take_number){
		cout<<"You should enter bigger number!"<<endl;
	}
}


		
	}while(take_number!=true_number);

	getch();
	return 0;
}




/*NOTE : RAND ILE HEP AYNI URETIYORUZ 
	SRAND VAR O NA DA 1 ,2 VB PARAMETRELER YOLLAYINCA DEGISCEK FAKAT SUREKLI DEGISMESINI ISTERSEK TIME KULLANIRIZ TIME 1970 DEN BU YANA GECEN SANIYEYI DONDURUR YANI HEP
	DEGISIR...
	TASLAK 
	INT SAYI
	SAYI = TIME(NULL)
	SRAND(SAYI)
	RAND= RAND()%100+1 //1-100 ARASI
	*/
	//BU BIR OYUN
