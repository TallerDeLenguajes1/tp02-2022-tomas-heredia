#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20


void main(){
    srand((int)time(NULL));
    int i;
    int vt[N];
  for(i = 0;i<N; i++)
    {
    vt[i]=1+rand()%100;
    printf("\n%d", vt[i]);
    }  
}
