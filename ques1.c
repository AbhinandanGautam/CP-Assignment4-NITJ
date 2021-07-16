#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int ans = fact(n);
    printf("Factorial of %d = %d\n",n,ans);
    return 0;
}