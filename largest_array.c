#include <stdio.h>

int main()
{
    int i, n, largest;
    int arr[100];

    scanf("%d", &n); /*Accepts total number of elements from the test data */

 for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]); /* Accepts the array element from test data */
    }
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]); /* Accepts the array elements from the test data */
    }

    largest = arr[0]; // Initialize largest with the first element of the array

    for (i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger element is found
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
