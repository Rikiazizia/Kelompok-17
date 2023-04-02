#include <stdio.h> 
#include <string.h> 
int main() {
 char var[] = "RIKI";
 char* varPtr = &var[0];
 for (int i = 0; i < 4; i++) 
{
 if (i == 0) {
 printf("%c\t", varPtr[i]);
 }
 if (i == strlen(var) -
1) {
 printf("%c", varPtr[i]);
 }
 }
 return 0;
}

