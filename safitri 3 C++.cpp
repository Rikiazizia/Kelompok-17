#include <iostream>
using namespace std;
int main() {
int a = 10, b = 20, c = 30;
int *pA = &a, *pB = &b, *pC
= &c;
cout << "Nilai a: " << *pA
<< endl;
cout << "Nilai b: " << *pB
<< endl;
cout << "Nilai c: " << *pC
<< endl;
return 0;
}

