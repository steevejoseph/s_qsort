
**An *attempt* at a quicksort implementation in C**
* The header (sjqsort.h) file contains the actual definition for quick_sort() and swap(). However, it **MUST** be in the same directory as sample_main.c (it is the header file, after all :thinking:)

* sample_main.c just contains a main() generating an array of random numbers, printing it, calling quick_sort(), then again printing it, sorted in place.

**Compilation instructions**:
1. `gcc -o quickie sample_main.c`

2. `./quickie`


**Sample output**:

```c
Unsorted:
9 10 8 2 5 4 6 3 7 1

Sorted:
1 2 3 4 5 6 7 8 9 10
```
