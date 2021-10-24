#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<n;i++)
    {
        printf("enter the value of a[%d]=",i);
        scanf("%d",&a[i]);
    }
     for(i=0
    
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    
    }
    printf("\nmax%d",max);
    printf("\nmin%d",min);
    sum=0;
    sum=sum+max+min;
    printf("\nsum=%d\n",sum);
    return 0;
    
}