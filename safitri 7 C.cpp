#include<stdio.h>
Int main(){
Int nilai = 7;
Int *tr1 = &nilai;
Int ** tr2 =&ptr1;
printf("Nilaidari variabel :%d\n", nilai);
printf("Alamatvariabel:%p\n",&nilai); 
printf("Nilaidaripointer 1:%p\n", ptr1); 
printf("Alamatpointer 1: %p\n", &ptr1); 
printf("Nilaidaripointer2:%p\n",ptr2); 
printf("Alamatpointer2:%p\n",&ptr2);


return 0;
}

