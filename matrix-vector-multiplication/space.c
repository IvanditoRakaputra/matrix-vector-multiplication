#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){

    int N;
    printf("N:\n");
    scanf("%d", &N);

    int mat[N*N];
    int vect[N];
    int res[N];

    initMat(mat, N);
    initVec(vect, N);

    while(1){
        matVecMult(mat, vect, res, N);
    }
    return 0;
}