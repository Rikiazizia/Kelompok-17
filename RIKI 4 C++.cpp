#include <iostream>
using namespace std;
int main()
{
int var[] = 
{1,2,3,4,5,6,7,8,9,10,11};
int* varPtr = var;
for (int i=0;i<11;i++){
cout << *varPtr <<endl;
varPtr++;
}
}
