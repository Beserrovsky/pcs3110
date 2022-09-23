#include "Heap.h"

void maxHeapify(int A[], int heapSize, int i) {
  int left, right, high, temp;

  left = leftChild(i);
  right = rightChild(i);

  if (left <= heapSize && A[left] > A[i])
    high = left;
  else
    high = i;
  
  if (right <= heapSize && A[right] > A[high])
    high = right;
  
  if (high != i)
    temp = A[i];
    A[i] = A[high];
    A[high] = temp;
    maxHeapify(A, heapSize, high);
}

int father(int i) {
  return i / 2; // Returns floor
}

int leftChild(int i) {
  return 2 * i;
}

int rightChild(int i) {
  return 2 * i + 1;
}
