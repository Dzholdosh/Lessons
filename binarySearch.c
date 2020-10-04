#include <stdio.h>
#include <string.h>
#define N 6

int main()
{
    int a[N] = {};
    for(int i = 0; i < N/2; ++i){
        a[2*i] = i;
        a[2*i+1] = N/2+i;
    }
    for (int i = 0; i < N; i++){
        printf("%d", a[i]);
        printf("\n");
    }
    return 0;
} 