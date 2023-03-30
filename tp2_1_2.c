//2a)
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i = 0;
    double vt[N];
    double *pvt = vt;  /// Uso el puntero *pvt

    while (i<N)
    {
        *pvt = 1+rand()%100;
        printf("%f  ",*pvt);
        i++;
        pvt++;
    }
    
    return 0;
}