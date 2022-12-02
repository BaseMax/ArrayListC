#ifndef _ARRAY_LIST_H_
#define _ARRAY_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int size;
    int count;
    int* data;
} ArrayList;

ArrayList* ArrayCreate(int n);

void ArrayAppendFirst(ArrayList* list, int value);

void ArrayAppendLast(ArrayList* list, int value);

void ArrayAppend(ArrayList* list, int value, int index);

void ArrayDelete(ArrayList* list, int index);

void ArrayDeleteFirst(ArrayList* list);

void ArrayDeleteLast(ArrayList* list);

void ArrayPrint(ArrayList* list);

void ArrayFree(ArrayList* list);

#endif
