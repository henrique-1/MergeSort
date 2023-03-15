#include "mergeSort.h"
#include "intercala.h"

void mergeSort(int A[], int p, int r){
    if(p < r){
        int q = ((p + r)/2);

        mergeSort(A, p, q);
        mergeSort(A, (q + 1), r);
        intercala(A, p, q, r);
    }
}