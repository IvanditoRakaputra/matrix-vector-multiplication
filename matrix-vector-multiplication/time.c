#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include <time.h>
FILE *time;

clock_t start, end;
double cpu_time_used, total_time_used;
int res;

int main(){
    time = fopen("time.dat","w")
    int N = 4500;

    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));
    

    for(N = 0; N <= 4000; N += 50){

        initMat(matrix, N); 
        initVec(vector, N);

        start = clock();
        matVecMult(matrix, vector, result, N);
        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        printf("(%d %lf),", N, cpu_time_used);
        printf("(%d %lf),", N/100, cpu_time_used*100);
        fprintf(time,"Runtime of ongoing step: %lfs   N: %d\n", cpu_time_used, N);

    }
    return 0;
}