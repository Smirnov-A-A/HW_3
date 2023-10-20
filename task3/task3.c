#include <stdio.h>

   int main() {
   char ch = 'a';    // a = 97
   ch = ch + 192;    // ch = 33, это '!'

   printf("ch = %d = %c\n", ch, ch);
   return 0;
}
