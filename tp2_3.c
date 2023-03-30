#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main()
{
    int i,j;
    double * pmt = (double *) malloc(sizeof(double) *N*M);

    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            * (pmt + i*M +j) = 1+rand()%100;
            printf("pmt:[%d,%d] %lf  \n", i,j, *(pmt + i*M +j));
        }
    }

    return 0;
}