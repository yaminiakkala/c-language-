/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/   
#include <stdio.h>
#include <math.h>
int main()
{
    //program to finding area of different geometric shape
    float length,breadth,radius,side,area;
    int n;
    printf("select any one of following option or area to calculate:\n");
    printf("1-area of rectangle,2-square,3-triangle,4-circle");
    scanf("%d",&n);
    switch(n){
        case 1:
              printf("enter length and breadth of a rectangle");
              scanf("%f%f",&length,&breadth);
              area=length*breadth;
              printf("area of rectangleis:%f\n",area);
              break;
        case 2:
              printf("enter side length of a square");
              scanf("%f",&side);
              area=side*side;
              printf("area of square is:%f\n",area);
              break;
        case 3:
              printf("enter length and breadth of a triangle");
              scanf("%f%f",&length,&breadth);
              area=(length*breadth)/2;
              printf("area of triangle is:%f\n",area);
              break;
        case 4:
              printf("enter length radius of a circle");
              scanf("%f",&radius);
              area=M_PI*radius*radius;
              printf("area of circle is:%f\n",area);
              break;
        default:
              printf("choose options wisely\n");
        
    }
    

    return 0;
}

