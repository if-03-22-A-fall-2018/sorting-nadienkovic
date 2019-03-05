/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		Nadia Bajim
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * Ich  habe dieses Beispiel ganz alleine gemacht, ich hoffe, dass Herr Prof. Haslinger stolz auf mich ist! <3
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
void 	init_random (int *array, unsigned long length){
  for (int i = 0; i < length; i++) {
    array[i] = rand()%20;
  }
}

void 	bubble_sort (int *array, unsigned long length){
  int swapCount;
  int lastInvalidIndex = length-1;

  do {
    swapCount= 0;
  for (int j = 0; j < lastInvalidIndex; j++) {
    if (array[j] > array[j + 1]) {
      int temp = array[j];
      array[j]= array[j+1];
      array[j+1] = temp;
      swapCount++;
      }
    }
  }while (swapCount != 0);
}

void 	insertion_sort (int *array, unsigned long length){
  for (int j = 1; j < length; j++) {
        int key = array[j];
        int i = j - 1;
        while (i >= 0 && array[i] > key)
        {
          array[i + 1] = array[i];
          i--;
        }
        array[i + 1] = key;
    }
}
