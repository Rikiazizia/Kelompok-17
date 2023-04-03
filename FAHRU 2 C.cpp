#include<stdio.h>

int main(){
	int var1 = 46;
	int *varptr1 = &var1;
	printf("alamat  dari var1 : %x\n", &var1);
	
	int var2 = 23;
	int *varptr2 = &var2;
	printf("alamat  dari var2 : %x\n", &var2);
	
	int var3 = 10;
	int *varptr3 = &var3;
	printf("alamat  dari var3 : %x\n", &var3);
}

