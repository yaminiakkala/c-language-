/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];int sum=0,n,cnt=0;
    printf("enter a string:");
    scanf("%s",a);
    n=strlen(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='0' && a[i]<='9'){
            sum+=+ (a[i] -'0');
            cnt++;
        }
    }
    printf("no of digits is:%d\n",cnt);
    printf("sum of digits is:%d",sum);

    return 0;
}

