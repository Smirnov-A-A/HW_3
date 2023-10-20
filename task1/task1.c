#include <stdio.h>

int main() {

   unsigned char ch_1 = 'a';    // a = 97
   int int_1 = ch_1;
   printf("ch_1 = %d, размер ch_1 - %ld; int_1 = %d, размер int_1 - %ld\n\n", ch_1, sizeof(ch_1), int_1, sizeof(int_1));

   signed short sh_2 = -128;
   unsigned int int_2 = sh_2;
   //вывод int_2 с кодом %d - преобразовывается в int
   printf("sh_2 = %d, размер sh_2 - %ld; int_2 = %d, размер int_2 - %ld\n", sh_2, sizeof(sh_2), int_2, sizeof(int_2));
   //вывод int_2 с кодом %u - преобразовывается в unsigned int
   printf("sh_2 = %d, размер sh_2 - %ld; int_2 = %u, размер int_2 - %ld\n\n", sh_2, sizeof(sh_2), int_2, sizeof(int_2));

   signed int int_3 = -100;
   unsigned long int ul_int = int_3;
   //вывод ul_int_3 с кодом %ld - преобразовывается в long int
   printf("int_3 = %d, размер int_3 - %ld; ul_int = %ld, размер ul_int - %ld\n", int_3, sizeof(int_3), ul_int, sizeof(ul_int));
   //вывод ul_int_3 с кодом %lu - преобразовывается в unsigned long int 
   printf("int_3 = %d, размер int_3 - %ld; ul_int = %lu, размер ul_int - %ld\n\n", int_3, sizeof(int_3), ul_int, sizeof(ul_int));

   int int_4 = 111;
   float fl_1 = int_4;
   printf("int_4 = %d, размер int_4 - %ld; fl_1 = %f, размер fl_1 - %ld\n\n", int_4, sizeof(int_4), fl_1, sizeof(fl_1)); 

   float fl_2 = -1.2;
   double dbl_1 = fl_2;
   printf("fl_2 = %f, размер fl_2 - %ld; dbl_1 = %f, размер dbl_2 - %ld\n\n", fl_2, sizeof(fl_2), dbl_1, sizeof(dbl_1));

   return 0;
}
