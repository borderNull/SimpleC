#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int P,L,S,H,Sq,V;

    printf("Enter P:");
    scanf("%d",&P);
    printf("Enter L:");
    scanf("%d", &L);
    printf("Enter S:");
    scanf("%d",&S);
    printf("Enter H:");

    scanf("%d",&H);

    Sq = P/2 * L;
    V = S/3*H;
    printf("\nResult:");
    printf("\nSq = %d;\nV =%d;",Sq,V);

    return 0;
}
