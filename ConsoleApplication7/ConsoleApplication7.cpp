#include <Windows.h>
#include <iostream>



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);






    
    /*
    int side = 2, row = 4, col1 = 4, col2 = 3;

    int*** ar = new int** [side];
    for (int i = 0; i < side; i++)
    {
        ar[i] = new int* [row];
    }

    for (int i = 0; i < row; i++)
    {
        ar[0][i] = new int [col1];
    }

    for (int i = 1; i < row; i++)
    {
        ar[1][i] = new int[col2];
    }

    for (int i = 0; i < side; i++)
    {
        for (int j = 1; j < row; j++)
        {
            delete ar[i][j];
        }
        delete ar[i];
    }
    delete ar;
*/
    /*
    * 
    void ArrPlus(int*& arr, int &size)
{
    
    int *temp = new int[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
 
    }
    delete[] arr;

    size += 1;
    arr = new int[size];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = temp[i];
    }

    arr[size - 1 ] = 100;

    delete[] temp;


}
   
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5 };

    ArrPlus(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }

    delete[] arr;
    */
    /*
    int row = 3, col = 4;
    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    */
    /*
    int size = 0;
    std::cin >> size;
    int* name = new int[size];

    name[1] = 10;

    delete[] name;
    */
}
