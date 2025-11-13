#include <stdio.h>

#define size 3

void shiftArr(int a[]);

int main(void) {
 int a[size];
 a[0] = 0;
 a[1] = 10;
 a[2] = 20;
 shiftArr(a);

 return 0;
}

void shiftArr(int a[]) {
 int temp;
 int i;
 temp = a[0];
 a[0] = a[2];
 a[2] = a[1];
 a[1] = temp;

 for(i = 0; i < size; i++) {
   printf("a[%d] = %d\n", i, a[i]);
 }
}
