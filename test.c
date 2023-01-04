#include<stdio.h>
int main()
{
    int arr[10] = {1,4,7,2,9,10,54,23,3,5};
    int i;

    int max = arr[0];

    
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("\nMax = %d",max);
    
}