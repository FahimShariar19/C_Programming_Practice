#include<stdio.h>
int main()
{
   int a ;              // this is allowed;              // this is allowed
   int b;               // this is allowed
   int fahim;           // this is allowed
   int fahim;  // this is not allowed in C program because there is a white space in the variable.
                      // ekhane kono special symbols hote parbe na.kono bracket hote parbe na.
                      // the rules of variables: first character must be alphabet or underscore(_)
                      // no comma and blank space. variable names are case sensitive 
 int fahim = 5;
fahim;
fahim ;                 // they are complitely different variabales 
                        // we must create meanintful variable name in our program.this enhance readability of our program.
    return 0;
}