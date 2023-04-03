#include <stdio.h> 
int main (){
int var;
int* varPtr = &var;

int variabel_1;
printf("alamat dari variabel_1 : %x \n", &variabel_1);

int variabel_2;
printf ("alamat dari variabel_2 : %x \n", & variabel_2);

int variabel_3;
printf ("alamat dari variabel_3 : %x \n", & variabel_3);

int varPtr_1 ;
printf("Nilai dari varPtr_1 : %x \n", varPtr_1);

int varPtr_2 ;
printf("nilai dari varPtr_2 : %X \n ", varPtr_2);

int varPtr_3 ;
printf("nilai dari varPtr_3 : %x \n ", varPtr_3);


}

