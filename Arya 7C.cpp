#include <stdio.h> 
int main(){
int var = 992;
int	*pertama = &var;
int	**kedua = &pertama;

printf("Alamat dari variable pointer pertama : %d\n", &pertama);
printf("Nilai dari variable pointer pertama : %d\n", *pertama);

printf("Alamat dari variable pointer kedua : %d\n", &kedua);
printf("Nilai dari variable pointer kedua : %d\n", **kedua);

}



