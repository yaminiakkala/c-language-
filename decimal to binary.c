/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int n,bin=0,cnt=0,a[100],b=0;
    printf("enter number in decimal number: ");
    scanf("%d",&n);
    printf("number in decimal form is:%d\n",n);
    for(int i=0;n!=0;i++){
        if(n%2==0){
            a[i]=0;
            
        }
        else{
            cnt++;
            a[i]=1;
            
        }
        n/=2;
        b++;
    }
    printf("number in binary form is\n");
    for(int i=b-1;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    printf("the total number of 1's in binary form is:%d\n",cnt);
    return 0;
}


