#include<stdio.h>
int main(){
	int a,b,c;
	int* a1=&a;
	int* b1=&b;
	int* c1=&c;
	printf("Alamat memori 1 adalah %x",&a);
	printf("\nisi memori 1 adalah %x",&a1);
	printf("\nAlamat memori 2 adalah %x",&b);
	printf("\nisi memori 2 adalah %x",&b1);
	printf("\nAlamat memori 3 adalah %x",&c);
	printf("\nisi memori 3 adalah %x",&c1);
}

