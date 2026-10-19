/**
 * -------------------------------------------------------------------------
 * WHAT IS A VARIABLE? (ভেরিয়েবল কী?)
 * -------------------------------------------------------------------------
 * 
  Easy Definition:
 * A variable is like a named storage container (or box) in memory 
 * that holds a value or data. We can store data in it, change it later, 
 * and access it anytime using its unique name.
 * 
 *  সহজ কথায়:
 * ভেরিয়েবল হলো মেমোরিতে থাকা একটি নামযুক্ত বক্স বা পাত্রের মতো, যার ভেতরে 
 * আমরা যেকোনো ডেটা/তথ্য জমা রাখতে পারি। পরবর্তীতে প্রয়োজন অনুযায়ী আমরা 
 * এই বক্সের ভেতরের তথ্য পরিবর্তন করতে পারি এবং এর নাম ধরে ডাকলেই তথ্যটি পেয়ে যাই।
 * 
 * Example / উদাহরণ:
 * let box = "Chocolate"; // 'box' নামক ভেরিয়েবলে 'Chocolate' রাখা হলো।
 * box = "Ice Cream";     // এখন বক্সের ভেতরের জিনিস পরিবর্তন করে 'Ice Cream' করা হলো।
 * 
 * Stucture of  declare a variable --- data_type-varable_name =value assigned
 */

#include <stdio.h>
int main ()
{
int n1;
int n2;
float n3;
double n4;
char ch;
// variable initialization
n1 =10;
n2 =20;
n3 =30.44;
n4 =30.4545;
ch ='a';
 
printf("n1 =%d\n",n1);

printf("n2 =%d\n",n2);
printf("n3 =%f\n",n3);
printf("n4 =%lf\n",n4);
printf("ch =%c\n", ch);
return 0;
}