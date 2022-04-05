#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20


int main(){
    srand((int)time(NULL));
    int i;
    double vt[N];
    double *p;
    p = vt;
  for(int i = 0;i<N; i++){
    *(p+i)=1+rand()%100;
    printf("%d", *(p+i));
    }
    return 0;  
}