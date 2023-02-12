/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,c ,x,y,disc,rpart,impart;
    
    
    scanf("%f%f%f",&a,&b,&c);
    disc=b*b - 4*a*c;
  
    //real and different root
    if(disc>0){
         x=(-b + sqrt(disc))/(2*a) ;
         y=(-b - sqrt(disc))/(2*a) ;
         printf("%f  %f",x,y);
    }
    else if(a==0 || b==0 || c==0){
        printf("roots cannot be determined\n");
        
    }
    //real and equal root
   else if(disc==0){
       x=y=-b/(2*a);
       printf("%f  %f",x,y);
   }
   
   //not a real root
   else{
       rpart=b/(2*a);
       impart=disc/(2*a);
     printf("x=-%f+%f ,y=-%f-%f",rpart,impart,rpart,impart);
   }
   

    return 0;
}


