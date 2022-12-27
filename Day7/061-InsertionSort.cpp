#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    // let i=0th element be sorted already
    // comparing next element with sorted elements
    for (int i = 1; i < size; i++)
    {
        int current = input[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < input[j]) // shift jth to right and current to left side of jth element
            {
                input[j + 1] = input[j];
            }

            else
            {
                break;
            }
        }
        input[j + 1] = current; // j-- in for loop decreases j by 1 but we need to add current to previous jth place so we do j+1
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        insertionSort(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}