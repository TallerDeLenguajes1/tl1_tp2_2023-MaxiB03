#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main() {

    int mt[N][M];
    int *p;

    p= &mt[0][0];

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            *p =1+rand()%100;
            printf("%6d", *p);
        }
        printf("\n");
    }

    return 0;
}




/* 
int i,j;
int mt[N][M];

for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
mt[i][j]=1+rand()%100;
printf("%6d", mt[i][j]);
}
printf("\n");
}

return 0;
*/