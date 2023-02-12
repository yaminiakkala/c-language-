/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //wap to swap numbers witout using artnmatic ,terinary character and only in xor operation
   long int a,b;
   scanf("%ld%ld",&a,&b);
   a=a^b;
   b=a^b;
   a=a^b;
   
   printf("%ld %ld",a,b);

    return 0;
}

