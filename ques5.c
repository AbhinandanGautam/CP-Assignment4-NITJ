#include<stdio.h>

int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int ans = fibo(n-1);
    printf("nth fibonacci term is %d\n",ans);
    return 0;
}