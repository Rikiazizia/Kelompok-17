#include <stdio.h> 
int main (){
int var1 = 1;
int *varPtr1 = &var1;
	printf("alamat dari var1 :%x ", &var1);
	printf("\nNilai dari varPtr1 :%i", *varPtr1);
	
int var2 = 12;
int *varPtr2 = &var2;
	printf("\n\nalamat dari var2 :%x ", &var2);
	printf("\nNilai dari varPtr2 :%i", *varPtr2);
	
int var3 = 17;
int *varPtr3 = &var3;
	printf("\n\nalamat dari var3 :%x ", &var3);
	printf("\nNilai dari varPtr3 :%i", *varPtr3);
}



