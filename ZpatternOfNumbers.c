#include <stdio.h>
 
void Z_Pattern(int N)
{
    int i, si, z;
    
    printf("enter the number of rows");
    scanf("%d",&N);
    
    int Top = 1, Bottom = 1, Diagonal = N - 1;
 
    for (i = 0; i < N; i++)
        printf("%d ", Top++);
 
    printf("\n");
 
    for (i = 1; i < N - 1; i++) {
 
        for (si = 0; si < 2 * (N - i - 1);
             si++)
            printf(" ");
 
        printf("%d", Diagonal--);
 
        printf("\n");
    }
 
    for (i = 0; i < N; i++)
        printf("%d ", Bottom++);
}
 

int main()
{
    int N ;
    Z_Pattern(N);
    return 0;
}
