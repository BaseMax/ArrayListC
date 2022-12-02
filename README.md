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
// Create an array list with maximum 10 value capacity.
ArrayList* list = ArrayCreate(10);

// Append a value to the last of the array list.
ArrayAppendLast(list, 10);
ArrayAppendLast(list, 20);
ArrayAppendLast(list, 30);
ArrayAppendLast(list, 40);

// Append a value to the first of the array list.
ArrayAppendFirst(list, 5);

// Append a value to the array list at the specified index.
ArrayAppend(list, 25, 2);

// Print the array list.
ArrayPrint(list);

// Delete a value from the array list at the specified index.
ArrayDelete(list, 3);

// Delete a value from the first of the array list.
ArrayDeleteFirst(list);

// Delete a value from the last of the array list.
ArrayDeleteLast(list);

// Print the array list.
ArrayPrint(list);
```

And the output is:

```bash
5 10 25 20 30 40
10 25 30
```

© Copyright Max Base, 2022
