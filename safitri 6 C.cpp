#include <stdio.h>
int kuadratkan(int *ptr) {
int hasil = (*ptr) * (*ptr);
return hasil;
}
int main() {
int angka = 7;
int *ptr = &angka;
int hasil = kuadratkan(ptr);
printf("Hasil kuadrat dari %d adalah
%d\n", *ptr, hasil);
return 0;
}


