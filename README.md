# ArrayList C

This is a simple implementation of an ArrayList in C using a struct, a pointer to the struct and a pointer to the array. The array is static and the size of the array is defined when the ArrayList is created.

## Functions

- `ArrayList* ArrayCreate(int n)`: Creates an ArrayList with a size of n.

- `void ArrayAppendFirst(ArrayList* list, int value)`: Add an element to the beginning of the list.

- `void ArrayAppendLast(ArrayList* list, int value)`: Appends a value to the end of the array.

- `void ArrayAppend(ArrayList* list, int value, int index)`: Appends a value to the array at the specified index.

- `void ArrayDelete(ArrayList* list, int index)`: Deletes the element at the given index.

- `void ArrayDeleteFirst(ArrayList* list)`: Deletes the first element of the array.

- `void ArrayDeleteLast(ArrayList* list)`: Deletes the last element of the array.

- `void ArrayPrint(ArrayList* list)`: Prints the array

- `void ArrayFree(ArrayList* list)`: Frees the memory

## Usage

```c
#include "arraylist.h"
```

© Copyright Max Base, 2022
