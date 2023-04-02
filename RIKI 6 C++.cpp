#include <iostream>
using namespace std;
void kuadrat(int* a){ 
cout << *a **a;
}
int main(){
int var = 88; 
kuadrat (&var);
}

