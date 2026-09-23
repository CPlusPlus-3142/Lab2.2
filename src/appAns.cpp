#include <fstream>
#include <string>
#include <iostream>
#include <array>
#include <cstdlib>
#include "../include/lab2.h"

using namespace std;

void print(int nums[], size_t size)
{   
    for (size_t i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
   
}


int load(int nums[], size_t size, string filename)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }

    int count = 0;
    while (count < size && file >> nums[count])
    {
        count++;
    }

    file.close();
    return count;
}

void sort(int nums[], size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}


/*************************************************************************************** 
 * You can put this in to help you test your code. */
 
int main()
{
    string filename = "my_file.txt";
    const size_t SIZE = 100;
    double measurements[SIZE];

    int sz = load(measurements, SIZE, filename);
    sort(measurements, sz);
    print(measurements, sz);
    return 0;
}
/***************************************************************************************/
