#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include <time.h>
FILE *time1;

clock_t start, end;
double cpu_time_used, total_time_used;
int res;

int main(){
    time1 = fopen("time1.dat","w");
    int N = 4000;

    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));
    

    for(N = 0; N <= 3500; N += 50){

        initMat(matrix, N); 
        initVec(vector, N);

        start = clock();
        matVecMult(matrix, vector, result, N);
        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        fprintf(time1,"(%d,%lf),", N/100, cpu_time_used*100);
        printf("(%d %lf),", N/100, cpu_time_used*100);
        printf("Runtime of ongoing step: %lfs   N: %d\n", cpu_time_used, N);

    }
    return 0;
}