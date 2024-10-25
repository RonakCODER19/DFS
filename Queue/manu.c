#include<stdio.h>
int first=1,last=5;
int array[5];
void insert()
{
    
    if(first>last)
    {
       printf("array is full !\n"); 
    }
    else
    {
        printf("array[%d]:",first);
        scanf("%d",&array[first]);
        first++;
        insert();
    }

}
int main()
{
    int select;

        printf("***manu***");
        printf("\n1.insert\n2.delete\n3.exit\n:");
        scanf("%d",&select);

            

            switch(select)
            {
                case 1:
                    insert();
                    break;

                default:
                    break;

            }

  
}
