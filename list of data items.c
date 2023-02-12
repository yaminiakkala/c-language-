
#include <stdio.h>
#include<limits.h>
int main()
{
    //wap to accept list of integers and find send largest and smallest and find difference between them
    int l1=INT_MIN,l2=INT_MIN,s1=INT_MAX,s2=INT_MAX,n;
    int avg;
    printf("enter number of data items");
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++){
        if(l[i]>l1){
            l2=l1;
            l1=l[i];
        }
        else if(l[i]>l2){
            l2=l[i];
        }
        if(l[i]<s1){
            s2=s1;
            s1=l[i];
        }
        else if(l[i]<s2){
            s2=l[i];
        }
    }
    printf("2nd largest element = %d ,second smallest element =%d",l2,s2);
    int count=0;
    avg=(l2 +s2)/2;
    for(int i=0;i<n;i++){
        if(avg==l[i]){
          count++;  
        }
        
    }
    if(count==0){
        printf("average value not in the array\n");
    }
    else{
        printf("average value in the array in %d time\n",count);
    }
    return 0;
}


