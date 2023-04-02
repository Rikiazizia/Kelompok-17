#include <iostream> 
#include <string> 
using namespace std; 
int main(){
string var = "RIKI"; 
char* varPtr = &var[0];
for (int i=0;i<4;i++){
if (i==0){
cout<<varPtr[i]<<"\t";
}
if (i==var.length()-1){
cout<<varPtr[i];
}
}
}
