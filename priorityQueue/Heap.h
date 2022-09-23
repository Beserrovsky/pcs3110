#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

/* Insert v as in max-heap and return it's index */
int insertMaxHeap(int A[], int v);

/* Organize item as max-heap */
void maxHeapify(int A[], int heapSize, int i);

/* Get father index */
int father(int i);

/* Get left child index */
int leftChild(int i);

/* Get rigth child index */
int rightChild(int i);

#endif
