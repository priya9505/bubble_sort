#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {8, 5, 6, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
}