#include <stdio.h> 
int main (){
int var1=88;
int* varPtr1 = &var1;
printf("Nilai yang ditunjukan varPtr1 : %d ",*varPtr1);
int var2=22;
int* varPtr2 = &var2;
printf("\nNilai yang ditunjukan varPtr2 : %d ",*varPtr2);
int var3=24;
int* varPtr3 = &var3;
printf("\nNilai yang ditunjukan varPtr3 : %d ",*varPtr3);
}

