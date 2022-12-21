#include <stdio.h>

void bubble_sort(int array[], int size) {
  int sorted = 0;
  do {
    sorted = 0;
    for (int i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) {
        // Swap the elements
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        sorted = 1;
      }
    }
    size --;
  } while (sorted);
}

int main() {
  int array[] = {5, 1, 4, 2, 8};
  int size = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, size);

  printf("Sorted array\n");

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
