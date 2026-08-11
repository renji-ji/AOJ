#include<stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int i,A[n];
    for(i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }
    
    // insertionsort
    int j,v=0;
    for(i=1;i<n;i++){
        v=A[i];
        j=i-1;
        while(j>=0 && A[j]>v){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
        for(j=0;j<n;j++){
            printf("%d",A[j]);
            if(j==n-1){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }

    return 0;

}