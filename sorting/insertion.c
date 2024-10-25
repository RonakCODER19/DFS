/*
    insertion sorting
*/
#include<stdio.h>

int main()
{

    int n,a[10],row,tamp=0,point=0;

        printf("Enter any number for range of array :");
        scanf("%d",&n);
       
    a[0]=0;

    for(row=1; row<=n; row++)
    {
        printf("list[%d]:",row);
        scanf("%d",&a[row]);
    }

        for(row=1; row<=n; row++)
        {
            point=row-1; // 0 1 2 3 
            tamp=a[row]; // 1 2 3 4  7 5 3 2 
            
                while(tamp<a[point])
                {
                    a[point+1]=a[point];
                    point--;
                }
                a[point+1]=tamp;
        }

    for(row=1; row<=n; row++)
    {
        printf("\n %d",a[row]);
    }
}