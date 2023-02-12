/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //wap to place given numbers in acending order
    int n,flag;
    printf("enter how many numbers: ");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers :");
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1] ){
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        //defining flag to avoid timecomplexity over already sorted list
        if(flag==0){
            break;
        }
    }
   printf("ascending order elemants are \n");
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }

    return 0;
}

