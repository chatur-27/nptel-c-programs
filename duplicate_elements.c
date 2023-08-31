#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]);

   for (i = 0; i < size; i++) {
      for (int j = i + 1; j < size;) {
         if (array[i] == array[j]) {
            // Shift elements to the left to overwrite the duplicate element
            for (int k = j; k < size - 1; k++) {
               array[k] = array[k + 1];
            }
            size--; // Reduce the size of the array after deletion
         } else {
            j++; // Move to the next element
         }
      }
   }

    for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}

