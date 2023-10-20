#include <stdio.h>

int main() {
   
   int x = 3, y = 1;
   x > y ? printf("%d\n", x) : printf("%d, %d\n", x, y);

   y = 5; x = 2;
   x > y ? printf("%d\n", x) : printf("%d, %d\n", x, y);

   return 0;
}
