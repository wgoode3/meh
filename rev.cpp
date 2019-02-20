#include <iostream>

void reverse(int arr[], int size);
void printArr(int arr[], int size);

void reverse(int arr[], int size)
{
    std::cout << "Starting array: ";
    printArr(arr, size);
    for(int i=0; i<size/2; i++)
    {
        int temp = arr[size-i-1];
        arr[size-i-1] = arr[i];
        arr[i] = temp;
    }
    std::cout << "  Ending array: ";
    printArr(arr, size);
}

void printArr(int arr[], int size)
{
    std::cout << "[";
    for(int i=0; i<size; i++)
    {
        i == size-1 ? std::cout << arr[i] : std::cout << arr[i]<< ", ";
    }
    std::cout << "]" << "\n";
}

int main()
{
    int a [] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    return 0;
}