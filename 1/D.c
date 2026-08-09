#include<stdio.h>

int maxclu(int x,int y){
    if(x>y)return x;
    return y;
}

int min(int x,int y){
    if(x<y)return x;
    return y;
}

int main(){
    int n,i,k;
    scanf(" %d", &n);
    int A[n];
    for (i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }

    int minvalu=0,maxprof=-1000000000;
    minvalu=A[0];

    for (i=1;i<n;i++){
        maxprof=maxclu(maxprof,A[i]-minvalu);
        minvalu=min(A[i],minvalu);
    }
    printf("%d\n",maxprof);
    return 0;
}
