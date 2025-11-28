#include<stdio.h>
int main(){
    int n,j,k;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%n==0)
        printf("perfect number");
        else if(i%n>0)
        printf("abundant number");
        else
        printf("deficient number");
        return 0;
    }
}