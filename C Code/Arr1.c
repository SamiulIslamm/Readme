#include<stdio.h>

void display(int A[], int n){
    printf("Array element is :\n");
    for(int i=0; i<n; i++){
        printf("%d ,",A[i]);
    }
}

int insertion(int A[],int size,int element,int index,int capacity){
            if(size>=capacity){
                printf("OOps!...\n");
                return -1;

            }else{
               for(int i = size-1; i>=index; i--){
                A[i+1]=A[i];
               }
               A[index] = element;
               return 1;
            }
}
int main(){
    int capacity = 100;
    int A[capacity];
    int size;
    printf("Enter the array elements :\n");
    scanf("%d",&size);

    printf("Now enter the elements :\n");
    for(int i=0; i<size; i++){
        printf("A[%d] ,",i);
        scanf("%d",&A[i]);
 
    }

    display(A,size);
    int element,index,temp,tem_index;
    printf("\n");
    printf("Enter the which index :\n");
    scanf("%d",&index);

    tem_index = index;

    printf("Enter the element to be insert :\n");
    scanf("%d",element);
   // temp = element;
    insertion(A,size,element,tem_index,capacity);
    size++;
    printf("\n");
    printf("After the insrtion ;\n");
    display(A,size);
}