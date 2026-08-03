#include<stdio.h>

void printA (int * , int );
void insertionSort(int *, int);

int main(){
    int n;
    scanf("%d", &n);
    int i, A[n];

    for (i = 0; i < n;i++){
        scanf("%d", &A[i]);
    }

    insertionSort(A, n);

    return 0;
}

void insertionSort(int *A, int n){
    int i = 0;
    int v = 0;

    for (i = 1; i < n; i++){
        v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v){
            A [j + 1] = A[j];
            j--;
        }
        A[j+1] = v;
        printA(A,n);
    }


}

void printA(int *A, int n){
    int i = 0;

    for (i =0; i < n; i++){
        printf("%d", A[i]);
        if (i != n-1){
            printf(" ");
        } else {
            printf("\n");
        }
    }

}