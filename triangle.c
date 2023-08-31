#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 

if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral Triangle");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle");
        } else {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                printf("Right-angle Triangle");
            } else {
                printf("Scalene Triangle");
            }
        }
    } else {
        printf("This Triangle is NOT possible.");
    }

    return 0;
}
