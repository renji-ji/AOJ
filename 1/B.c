#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    // ユークリッド
    int d = x%y;

    while(d != 0){
        x = y;
        y = d;
        d = x % y;
    }

    printf("%d\n", y);
    return 0;
}