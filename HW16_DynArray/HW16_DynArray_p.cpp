#include <iostream>

using namespace std;

int main()
{
    int x = 3, y = 3, z = 3;

    int*** arr = new int** [x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int* [y];
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new int[z];
        }
    }

    for (int k = 0; k < z; k++)
        for (int j = 0; j < y; j++)
            for (int i = 0; i < x; i++)
                arr[i][j][k] = 1 + i + x * j + x * y * k;

    for (int k = 0; k < z; k++)
        for (int j = 0; j < y; j++)
            for (int i = 0; i < x; i++)
                cout << arr[i][j][k] << endl;

    cout << '\n';

    for (int k = 0; k < z; k++)
        for (int j = 0; j < y; j++)
            for (int i = 0; i < x; i++)
                arr[i][j][k] = 27 - (i + x * j + x * y * k);

    for (int k = 0; k < z; k++)
        for (int j = 0; j < y; j++)
            for (int i = 0; i < x; i++)
                cout << arr[i][j][k] << endl;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            delete[] arr[i][j];

        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}