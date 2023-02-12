/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    //wap for binary to decimal conversion
    int b,sum=0,cnt=0,temp;
    printf("enter a number in binary form:");
    scanf("%d",&b);
    while(b){
        temp=b%10;
        sum=sum + temp*pow(2,cnt);
        b=b/10;
        cnt++;
    }
    printf("decimal number is \n");
    printf("%d",sum);

    return 0;
}

