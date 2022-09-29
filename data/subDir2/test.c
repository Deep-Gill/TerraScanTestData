#include <stdio.h>

int a[10] = {0,1,1,2,3,5,8,13,21,34};

int main() {
 int x = *(a+3);
 printf("x=%d", x);
 x = &a[7] - &a[2];
 printf("x=%d", x);
 x = *(a + (&a[7]-a+2));
 printf("x=%d", x);
}
