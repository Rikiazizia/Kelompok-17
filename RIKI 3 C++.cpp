#include <iostream>
using namespace std;
int main(){
int var1 = 8;
int* varPtr1 = &var1;
cout << "Nilai dari variable yang ditunjuk varPtr1: " << *varPtr1;
int var2 = 63;
int* varPtr2 = &var2;
cout << "\nNilai dari variable yang ditunjuk varPtr2: " << *varPtr2;
int var3 = 25;
int* varPtr3 = &var3;
cout << "\nNilai dari variable yang ditunjuk varPtr3: " << *varPtr3;
}

