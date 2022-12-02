/*
 * @Name: ArrayList C
 * @Author: Max Base
 * @Date: 2022/12/02
 * @Repository: https://github.com/basemax/ArrayListC
 */

#include "ArrayList.h"

/**
 * @brief Create an array list with maximum `n` value capacity.
 * @param n Maximum capacity of the array list.
 * @return Pointer to the array list.
 */
ArrayList* ArrayCreate(int n)
{
    ArrayList* list = malloc(sizeof(int) * n);
    list->size = n;
    list->count = 0;
    return list;
}

/**
 * @brief Append a value to the first of the array list.
 * @param list Pointer to the array list.
 * @param value Value to append.
 */
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

/**
 * @brief Append a value to the last of the array list.
 * @param list Pointer to the array list.
 * @param value Value to append.
 */
void ArrayAppendLast(ArrayList* list, int value)
{
    if (list->count == list->size) {
        printf("Error: Array is full!\n");
        return;
    }
    list->data[list->count] = value;
    list->count++;
}

/**
 * @brief Append a value to the array list at the specified index.
 * @param list Pointer to the array list.
 * @param value Value to append.
 * @param index Index to append the value.
 */
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

/**
 * @brief Delete a value from the array list at the specified index.
 * @param list Pointer to the array list.
 * @param index Index to delete the value.
 */
void ArrayDelete(ArrayList* list, int index)
{
    if (list->count <= 0) {
        printf("Error: Array is empty!\n");
        return;
    }
    else if (index >= list->count || index < 0) {
        printf("Error: Index out of range!\n");
        return;
    }

    for (int i = index; i < list->count; i++) {
        list->data[i] = list->data[i + 1];
    }

    list->count--;
}

/**
 * @brief Delete a value from the first of the array list.
 * @param list Pointer to the array list.
 */
void ArrayDeleteFirst(ArrayList* list)
{
    ArrayDelete(list, 0);
}

/**
 * @brief Delete a value from the last of the array list.
 * @param list Pointer to the array list.
 */
void ArrayDeleteLast(ArrayList* list)
{
    ArrayDelete(list, list->count - 1);
}

/**
 * @brief Print the array list.
 * @param list Pointer to the array list.
 */
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

/**
 * @brief Free the array list.
 * @param list Pointer to the array list.
 */
void ArrayFree(ArrayList* list)
{
    free(list);
}


/**
 * @brief Convert the array list to a string.
 * @param list Pointer to the array list.
 * @return String of the array list.
 */
char* ArrayToString(ArrayList* list)
{
    if (list->count <= 0) {
        printf("Error: Array is empty!\n");
        return NULL;
    }

    // Consider the size of the string for each integer is maximum 10 characters.
    char* str = malloc(sizeof(char) * list->count * 10);
    char* temp = malloc(sizeof(char) * 10);

    for (int i = 0; i < list->count; i++) {
        sprintf(temp, "%d", list->data[i]);
        strcat(str, temp);
        strcat(str, " ");
    }

    free(temp);
    return str;
}
