/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // wap given year is leap year or not
    
    int year;
    scanf("%d",&year);
    if(year%4==0){
        printf("it is a leap year");
    }
    else{
        printf("no it is not a leap year");
    }

    return 0;
}

