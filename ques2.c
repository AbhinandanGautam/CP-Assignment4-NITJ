#include<stdio.h>

// call by value
void SWAP(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Value of a=%d and b=%d\n",a,b);
}

// call by reference
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Value of a=%d and b=%d\n",*a,*b);
}

int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    SWAP(a,b);
    swap(&a,&b);

    return 0;
}