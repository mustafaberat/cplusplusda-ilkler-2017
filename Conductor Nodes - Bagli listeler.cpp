


//bagli listler			Conductors nodes
//	vektor ile bagli liste farki :   vektor ayni tip ama bagli listede ne tanimlarsak structe bile olur
//dinamic degistirelebilir
#include<iostream>
#include<conio.h>
using namespace std;

class Student{
	public:
	int age;
	string name;
	string surname;
	double number;
	Student* next;
};



int main(){
	Student *root, *conductor; //listeyi ilk kaydet aksi halde icerde kalir digeri oynama yapacagimiz 
	//ilkini attik ilki ikinciye bagli
	root=new Student; //studentdeki yer kadar acmasi lazim
	root->name="Mustafa Berat";
	root->surname="ARU";
	root->age=19;
	root->number=30716006;
	
	conductor=root; //conductora root attik 
	
	conductor->next=new Student;
	conductor=conductor->next; //ilkiyle ikinci degisti simdi conductor degerleri yazabiliriz
	
	conductor->name="Fatih";
	conductor->surname="Karaman";
	conductor->age=20;
	conductor->number=30716022;
	
	conductor->next=new Student;
	conductor=conductor->next;
	
	conductor->name="BlackAli";
	conductor->surname="Karaman";
	conductor->age=21;
	conductor->number=30716029;
	conductor->next=0;
	
	
	
	conductor=root;
	while(conductor){	//1 oldugu surece calisir
		if(conductor->age==20)			cout<<conductor->name<<" "<<conductor->surname<<endl;
		conductor=conductor->next; //digerine gecti taki next 0 olcak sonra cikacak zaten
	}
	
	
	getch();
	return 0;
}


