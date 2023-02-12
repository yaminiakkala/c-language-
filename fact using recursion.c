/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int num);
int main()
{
    int n,fact;
    printf("enter a number:");
    scanf("%d",&n);
    fact=factorial(n);
    
    printf("factorial of a given number is :%d",fact);

    return 0;
}
int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
    
}


