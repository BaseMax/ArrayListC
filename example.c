/*
 * @Name: ArrayList C
 * @Author: Max Base
 * @Date: 2022/12/02
 * @Repository: https://github.com/basemax/ArrayListC
 */

#include "ArrayList.h"

int main(int argc, char** argv)
{
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

    return 0;    
}
