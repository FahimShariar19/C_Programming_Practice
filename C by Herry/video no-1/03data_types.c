#include <stdio.h>
int main()
{
  // int a;      // initialaization
  // int a = 1;  // value decleration
  // float b;
  //  float b = 2.34;      /*✅ C-তে সাধারণ Data Type ও তাদের Memory Size
  //    Data Type    কী রাখে	সাধারণত         Memory
  // char	        এক অক্ষর	          1 byte
  // int	        পূর্ণসংখ্যা	               4 bytes
  //  float	       দশমিক সংখ্যা	            4 bytes
  // double	 বেশি নিখুঁত দশমিক         	8 bytes
  // short       	ছোট integer	           2 bytes
  // long	       আরও বড় int           	8 bytes

  // ⚠️ Memory size compiler ও system-এর উপর নির্ভর করে সামান্য পরিবর্তন হতে পারে।*/
  // double c;
  //  double c =4.5643;
  //  char d;
  //  char d = 'f';
  //  ".exe file is an executable file generated after compiling a C source code, which contains machine code that can be directly executed by the operating system."*/

 // printf("char  : %d bytes\n", sizeof(char));
 // printf("int   : %d bytes\n", sizeof(int));
 // printf("float : %d bytes\n", sizeof(float));
 // printf("double: %d bytes\n", sizeof(double));

  int a = 3;
  float b =2.44;
  char c = 'd';
  printf("the value of a is %d\n",a);
printf("the value of b is %f\n",b);
printf("the value of c is %c\n",c);

  return 0;;

  // comments are used to clarify something about the program in plain language. it is a way for us to add notes to our program
}