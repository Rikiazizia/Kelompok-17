#include <iostream>
using namespace std;
int main(){ 

int var1 = 10;
int* varPtr1 = &var1;
cout <<	"alamat	memori :"<< &var1;
cout <<	"\nisi varPtr	:" <<*varPtr1;

int var2 = 25;
int* varPtr2 = &var2;
cout <<	"\nalamat	memori :"<< &var2;
cout <<	"\nisi varPtr	:" <<*varPtr2;

int var3 = 16;
int* varPtr3 = &var3;
cout <<	"\nalamat	memori :"<< &var3;
cout <<	"\nisi varPtr	:" <<*varPtr3;
}




