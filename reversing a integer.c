/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    //wap to reverse a integer
    int n,rev_num=0;
    printf("enter a number which you want to reverse: ");
    scanf("%d",&n);
    while(n){
        rev_num=rev_num*10 +n%10;
        n=n/10;
    }
    printf("reversed number is:%d",rev_num);

    return 0;
}

