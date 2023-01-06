#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sizeofarr;
    cout << "Enter Size of array = " << endl;
    cin >> sizeofarr;
    int arr[sizeofarr];

    cout << "Enter Elements in array :" << endl;
    for (int i = 0; i < sizeofarr; ++i)
    {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the direction of rotation of array (0 for left and 1 for right) : ";
    cin >> d;
    int p;
    cout << "Enter the no of position shifted in th array : ";
    cin >> p;

    if (d == 1)
    {
        for (int i = 0; i < p; i++)
        {
            int j, last;
            // Stores the last element of the array
            last = arr[sizeofarr - 1];

            for (j = sizeofarr - 1; j > 0; j--)
            {
                // Shift element of array by one
                arr[j] = arr[j - 1];
            }
            // Last element of array will be added to the start of array.
            arr[0] = last;
        }

        cout << endl;

        // Displays resulting array after rotation
        printf("Array after right rotation: \n");
        for (int i = 0; i < sizeofarr; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < p; i++)
        {
            int j, first;
            // Stores the first element of the array
            first = arr[0];

            for (j = 0; j < sizeofarr - 1; j++)
            {
                // Shift element of array by one
                arr[j] = arr[j + 1];
            }
            // First element of array will be added to the end
            arr[j] = first;
        }

        cout << endl;
        ;

        // Displays resulting array after rotation
        cout << ("Array after left rotation: \n");
        for (int i = 0; i < sizeofarr; i++)
        {
            cout << (arr[i]) << " ";
        }
    }

    return 0;
}