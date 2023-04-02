#include<iostream>
using namespace std;

int main(){
	int var1 = 88;
	int *varptr1 = &var1;
	cout<<"alamat  dari var1 : "<< &var1;
	
	int var2 = 22;
	int *varptr2 = &var2;
	cout<<"\nalamat  dari var2 : "<< &var2;
	
	int var3 = 44;
	int *varptr3 = &var3;
	cout<<"\nalamat  dari var3 : "<< &var3;
}

