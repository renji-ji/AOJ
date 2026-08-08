#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int A[n];
    for (i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }

    int count=0;
    int d=2;
    int flag=0;
    for(i=0;i<n;i++){
        d=2;
        flag=0;
        if (A[i]==2){
            count++;
        } else if(A[i]>2){
            while(d*d<=A[i]){
                if(A[i]%d==0){
                    flag=1;
                    break;
                }
                d++;
            }
            if(flag == 0)count++;
        }
    }
    printf("%d\n",count);
    return 0;
}