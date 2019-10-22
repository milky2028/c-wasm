#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char* boolToString(bool b) { return b ? "true" : "false"; }

bool isNumArraySorted(size_t arr[], size_t arrLength) {
  for (size_t i = 1; i < arrLength; i++) {
    size_t lastItem = arr[i - 1];
    size_t currentItem = arr[i];
    if (lastItem > currentItem) {
      return false;
    }
  }

  return true;
}

void sort(size_t arr[], size_t arrLength) {
  if (isNumArraySorted(arr, arrLength)) {
    return;
  } else {
    for (size_t i = 1; i < arrLength; i++) {
      size_t lastItem = arr[i - 1];
      size_t currentItem = arr[i];

      if (lastItem > currentItem) {
        arr[i] = lastItem;
        arr[i - 1] = currentItem;
      }
    }
  }
}

int main() {
  size_t arr[] = {1, 5, 7, 41, 2050, 9000};
  size_t arrLength = sizeof(arr) / sizeof(arr[0]);
  printf("%s\n", boolToString(isNumArraySorted(arr, arrLength)));
  sort(arr, arrLength);
  for (size_t i = 0; i < arrLength; i++) {
    printf("%lu\n", arr[i]);
  }
  printf("%s\n", boolToString(isNumArraySorted(arr, arrLength)));

  return EXIT_SUCCESS;
}