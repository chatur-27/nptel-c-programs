#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); /* The value of N is taken from the test cases */


for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    printf("Sum = %d", sum);

}