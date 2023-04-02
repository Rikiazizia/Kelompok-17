#include <iostream>
using namespace std;

void kuadrat(int* a){ 
cout << *a **a;
}

int main(){
int var = 5; 
	kuadrat (&var);
}

