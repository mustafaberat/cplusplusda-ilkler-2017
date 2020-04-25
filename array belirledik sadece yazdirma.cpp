#include<iostream>
#include<conio.h>
#include <iomanip>
   
// setw(4         iomanip          4 bosluk veriyor sana 
using namespace std;

int main(){

	int i, j, array[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
for (i = 0; i < 3; i++){
for (j = 0; j < 4; j++){
cout << setw(4) << array[i][j] << " ";}
cout << endl;}

	getch();
	return 0;
}

