#include<iostream>
using namespace std; 
int kuadrat(int *ptr) {
int hasil = *ptr *
*ptr;
return hasil;
}
int main() { int nilai = 7;
int *ptr = &nilai;
cout << "Nilai awal: "<< nilai << endl;
int hasil = kuadrat(ptr);
cout << "Nilai kuadrat: " << hasil << endl; 
return 0;
}

