#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int temp = N;
    int power = 0;

    while (temp > 1) {
        if (temp % 2 != 0) {
            break;
        }
        temp /= 2;
        power++;
    }

    if (temp == 1) {
        printf("%d is a number that can be expressed as power of 2.", N);
    } else {
        printf("%d cannot be expressed as power of 2.", N);
    }

    return 0;
}

