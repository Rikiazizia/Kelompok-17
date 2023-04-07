#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int* a1=&a;
	int* b1=&b;
	int* c1=&c;
	cout<<"Alamat memori 1 adalah "<<&a<<endl;
	cout<<"isi memori 1 adalah "<<a1<<endl;
	cout<<"Alamat memori 2 adalah "<<&b<<endl;
	cout<<"isi memori 2 adalah "<<b1<<endl;
	cout<<"Alamat memori 3 adalah "<<&c<<endl;
	cout<<"isi memori 3 adalah "<<c1<<endl;
}

