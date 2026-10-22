#include <iostream>

void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
    std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void reverse(int*arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int x = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = x;
    }
}

int main()
{
    int size = 9;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << " Do funcii reverse: ";
    printArr(arr, size);
    reverse(arr, size);
    std::cout << "Posle funcii reverse: ";
    printArr(arr, size);

}