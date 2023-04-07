#include<iostream>
int main(){
	int var1=8;
	int var2=9;
	int var3=10;
	int* varPtr1=&var1;
	int* varPtr2=&var2;
	int* varPtr3=&var3;
	printf("Nilai dari variable yang ditunjuk varPtr 1: %x",&varPtr1);
	printf("\nNilai dari variable yang ditunjuk varPtr 2: %x",&varPtr2);
	printf("\nNilai dari variable yang ditunjuk varPtr 3: %x",&varPtr3);
}

