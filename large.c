#include<stdio.h>
void main()
{
int a[10]={8,90,5,4,1,82,98,100,38,76};
int i,j,t;
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
        if(a[i]<a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
    printf("%d",a[0]);
    
}
