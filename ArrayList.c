/*
 * @Name: ArrayList C
 * @Author: Max Base
 * @Date: 2022/12/02
 * @Repository: https://github.com/basemax/ArrayListC
 */

#include "ArrayList.h"

/**
 * @brief Create an array list with maximum `n` value capility
 * @arguments: `n`
 * 
 */
ArrayList* ArrayCreate(int n)
{
    ArrayList* list = malloc(sizeof(int) * n);
    list->size = n;
    list->count = 0;
    return list;
}

void ArrayAppendFirst(ArrayList* list, int value)
{
    if(list->count == list->size) {
        printf("Error: Array is full!\n");
        return;
    }
    for (int i = list->count; i > 0; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[0] = value;
    list->count++;
}

void ArrayAppendLast(ArrayList* list, int value)
{
    if (list->count == list->size) {
        printf("Error: Array is full!\n");
        return;
    }
    list->data[list->count] = value;
    list->count++;
}

void ArrayAppend(ArrayList* list, int value, int index)
{
    if (list->count == list->size) {
        printf("Error: Array is full!\n");
        return;
    }
    if (index < 0 || index > list->count) {
        printf("Error: Index out of range!\n");
        return;
    }
    for (int i = list->count; i > index; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = value;
    list->count++;
}

void ArrayDelete(ArrayList* list, int index)
{
    if (list->count <= 0) {
        printf("Error: Array is empty!\n");
        return;
    }
    else if (index >= list->count) {
        printf("Error: Index out of range!\n");
        return;
    }
    for (int i = index; i < list->count; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->count--;
}

void ArrayDeleteFirst(ArrayList* list)
{
    ArrayDelete(list, 0);
}

void ArrayDeleteLast(ArrayList* list)
{
    ArrayDelete(list, list->count - 1);
}

void ArrayPrint(ArrayList* list)
{
    if (list->count <= 0) {
        printf("Error: Array is empty!\n");
        return;
    }
    for (int i = 0; i < list->count; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

void ArrayFree(ArrayList* list)
{
    free(list);
}

