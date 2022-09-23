#include "Heap.h"
#include "PriorityQueue.h"

int changePriority(int A[], int heapSize, int i, int v) {
  int temp;

  if (v > A[i]) {
    A[i] = v;
    //TODO: ADD STUFF HERE
  }
  else {
    A[i] = v;
    maxHeapify(A, heapSize, i);
  }
}
