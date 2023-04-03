#include <stdio.h> 
Using namespace std;

int main (){
int var;
int* varPtr = &var;

int variabel_1;
cout <<"alamat dari variabel_1 : %x \n", &variabel_1;

int variabel_2;
cout << "alamat dari variabel_2 : %x \n", & variabel_2;

int variabel_3;
cout<<"alamat dari variabel_3 : %x \n", & variabel_3;

int varPtr_1 ;
cout <<"Nilai dari varPtr_1 : %x \n", varPtr_1;

int varPtr_2 ;
cout << "nilai dari varPtr_2 : %X \n ", varPtr_2;

int varPtr_3 ;
cout << "nilai dari varPtr_3 : %x \n ", varPtr_3;

return 0;

