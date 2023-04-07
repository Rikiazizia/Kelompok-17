#include<iostream>
using namespace std;
int main(){
	int var1=8;
	int var2=9;
	int var3=10;
	int* varPtr1=&var1;
	int* varPtr2=&var2;
	int* varPtr3=&var3;
	cout<<"Nilai dari variable yang ditunjuk varPtr 1: "<<*varPtr1<<endl;
	cout<<"Nilai dari variable yang ditunjuk varPtr 2: "<<*varPtr2<<endl;
	cout<<"Nilai dari variable yang ditunjuk varPtr 3: "<<*varPtr3<<endl;
}

