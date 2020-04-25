
#include<iostream>
#include<conio.h>
#include<iomanip> //setw
#include<math.h>
#include<time.h>
#include<cstdlib> //rand

using namespace std;

int main(){

srand(time(NULL)); //rastgele

int matrix[5][5];
float normal=0; int trace=0; //normal:square root of the sum of all diagonal and square   trace: sum of diagonals

for(int i=0; i<5;i++){
	for(int j=0; j<5; j++){
		matrix[i][j]=rand()%99+1; 
		cout<<setw(4)<<matrix[i][j];
	}
	cout<<endl;
}


for(int i=0; i<5; i++){ //finder trace
	for(int j=0; j<5; j++){
		if(i==j) 		 trace+=matrix[i][j];
	}
}



for(int i=0; i<5; i++){ //elemanlarinin karelerini tek tek topla ve karekok al
	for(int j=0; j<5; j++){
		normal+=pow(matrix[i][j],2);
	}
}

cout<<endl<<endl;
cout<<setw(6)<<"Trace: "<<trace<<endl;
cout<<setw(6)<<"Normal: "<<sqrt(normal)<<endl;

	
	getch();
	return 0;
}

