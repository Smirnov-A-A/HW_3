#include <stdio.h>

int main() {

   int a = 2, b = 0;
   printf("a = 2 ^ 4 = %d\n", a * a * a * a);

   b = a;
   a *= a;
   a *= a;
   a *= b;
   a *= a;

   printf("a = 2 ^ 10 = %d\n", a);

   return 0;
}
