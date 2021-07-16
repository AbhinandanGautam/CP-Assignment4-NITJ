#include<stdio.h>
// Using recursion
int SUM(int n){
    if(n==0){
        return 0;
    }
    return n%10 + SUM(n/10);
}
// without using recursion
int sum(int n){
    int num = n,sum=0;
    while(num){
        int digit = num%10;
        sum += digit;
        num = num/10;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ANS = SUM(n);
    int ans = sum(n);
    printf("Sum of digits with recursion = %d\n",ANS);
    printf("Sum of digits without recursion = %d\n",ans);
    return 0;
}