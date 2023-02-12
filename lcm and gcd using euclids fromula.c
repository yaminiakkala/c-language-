/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findgcd(int a,int b){
    if(a==0){
        return b;
    }
    return findgcd(b%a,a);
}
int main()
{
    int a,b,lcm,gcd;
    printf("enter any two numbes:");
    scanf("%d%d",&a,&b);
    if(a>b){
        gcd=findgcd(b,a);
    }
    else{
        gcd=findgcd(a,b);
    }
    lcm=(a*b)/(gcd);
    printf("lcm is :%d\n",lcm);
    printf("gcd is :%d",gcd);

    return 0;
}


