#include<stdio.h>

void fac(int n,int cnt){
    if(n==1){
        return;
    }else if(n%cnt==0){
        printf("%d ",cnt);
        fac(n/cnt,cnt);
    }else{
        fac(n,cnt+1);
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    printf("Prime factor of %d: ",n);
    int i=2;
    fac(n,2);
    printf("\n");

    return 0;
}