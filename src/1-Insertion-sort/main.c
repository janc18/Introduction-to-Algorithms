/*
 * Autor: José Agustín
 * License: MIT
 * Insertion sort algorithm based in the Introduction to Algorithms 4th page:19
 */

#include <stdio.h>

int array[] = {1, 2, 7, 9, 6, 12, 4, 3};

void insertion_sort(int *array, int size_array) {
  int key, j = 0;
  for (int i = 1; i < size_array; i++) {
    key = array[i];
    j = i - 1;
    while (j > 0 && array[j] > key) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
};

void print_array(int *array, int size_array) {

  for (int i = 0; i < size_array; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
};

int main() {
  printf("Array before insertion sort:\n");
  print_array(array, sizeof(array) / sizeof(int));

  printf("Array after insertion sort:\n");
  insertion_sort(array, sizeof(array) / sizeof(int));
  print_array(array, sizeof(array) / sizeof(int));
  return 0;
}
