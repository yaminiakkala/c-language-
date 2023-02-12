/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,even_sum=0,odd_sum=0;
    printf("enter a interger n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even_sum +=i;
        }
        else{
            odd_sum+=i;
        }
    }
    printf("sum of even numbers is:%d\n",even_sum);
    printf("sum of odd numbers is:%d",odd_sum);

    return 0;
}

