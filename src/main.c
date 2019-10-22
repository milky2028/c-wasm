#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isArraySorted(int arr[], size_t lengthArr) {
  for (size_t i = 1; i < lengthArr; i++) {
    int currentItem = arr[i];
    int lastItem = arr[i - 1];
    if (currentItem < lastItem) {
      return false;
    }
  }
  return true;
}

char* convertBoolToString(bool trueOrFalseValue) {
  return trueOrFalseValue ? "true" : "false";
}

int main() {
  int arr[] = {7, 2, 2, 58, 101, 4203, 5000};
  size_t lengthArr = sizeof(arr) / sizeof(arr[0]);
  printf("%s\n", convertBoolToString(isArraySorted(arr, lengthArr)));

  return EXIT_SUCCESS;
}