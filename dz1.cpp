#include <iostream>

void printArr(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';

    }
    std::cout << std::endl;
}

int main()
{
    const int size { 9 };
    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int size2 { 4 };
    int arr2[] = { 6, 5, 4, 8};
    const int size3 { 5 };
    int arr3[] = { 1, 4, 3, 7, 5};
    printArr(arr1, size);
    printArr(arr2, size2);
    printArr(arr3, size3);



}