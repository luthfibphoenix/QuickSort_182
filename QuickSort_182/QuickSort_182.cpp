#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];							
int cmp_count = 0;                      // number of comparasion 
int mov_count = 0;                      // number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

// swaps the element st index with the element at index y
void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)
{
    int pivot, i, j;
    if (low > high)                                                 // Langkah algoritma No. 1
        return;

   // Partition the list into two parts:
   // One containing element less that or equal to privat
   // Outher containing elements greater than pivot
    i = low + 1;                                                    // Langkah algoritma No. 3
    j = high;                                                       // Langkah algoritma No. 4
    pivot = arr[low];                                               // Langkah algoritma No. 2

    