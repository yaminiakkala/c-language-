/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a[n+1];
    printf("number of elements");
    scanf("%d",&n);
    a[0]=0,a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}

