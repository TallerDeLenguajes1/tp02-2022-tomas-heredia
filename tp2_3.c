#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5
#define M 7
void main(){
    srand((int)time(NULL));
    int i,j;
    int mt[N][M];
    int *p;
    p = mt;
    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    *(p+(i*M + j))=1+rand()%100;
    printf("\n%d", *(p+(i*M + j)));
    }
    printf("\n");
    }
}