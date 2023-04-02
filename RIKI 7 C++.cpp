#include <iostream>
using namespace std;
int main(){
int var = 88;
int *pertama = &var;
int **kedua = &pertama;
cout<< "Alamat dari variable pointer pertama :" << &pertama << endl;
cout<< "nilai dari variabel pointer pertama :" <<*pertama <<endl<<endl;
cout<< "Alamat dari variabel pointer kedua :" <<&kedua<<endl;
cout<< "nilai dari variabel pointer kedua :" <<**kedua<<endl;
}

