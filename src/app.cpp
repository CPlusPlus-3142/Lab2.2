#include <fstream>
#include <string>
#include <iostream>
<<<<<<< HEAD

using namespace std;

void print(double nums[], size_t size, string filename)
{

}

int load(double nums[], size_t size, string filename)
{

}

void swap(double& x, double& y)
{

}

void sort(double nums[], size_t size)
{

}


/***************************************************************************************
 * You can use this main function to help test your code.
 */

=======
#include <array>
#include <cstdlib>
#include "../include/lab2.h"

using namespace std;

void print(double nums[], size_t size)
{   
   
}


int load(double nums[], size_t size, string filename)
{
}

void sort(double nums[], size_t size)
{
}


/*************************************************************************************** 
 * You can put this in to help you test your code. 
 
>>>>>>> 4dc5c0a76ea1d37ea6e622b205cd9148fff1b590
int main()
{
    string filename = "my_file.txt";
    const size_t SIZE = 100;
    double measurements[SIZE];
<<<<<<< HEAD

    int sz = load(measurements, SIZE, filename);
    sort(measurements, sz);
    print(measurements, sz, "output.txt");

    return 0;
}

/***************************************************************************************/
=======
    int sz = load(measurements, SIZE, filename);
    sort(measurements, sz);
    print(measurements, sz);
    return 0;
}
***************************************************************************************/
>>>>>>> 4dc5c0a76ea1d37ea6e622b205cd9148fff1b590
