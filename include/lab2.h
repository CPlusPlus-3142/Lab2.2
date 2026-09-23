#include <cstddef>
#include <string>

// include guard
#ifndef LAB2_H
#define LAB2_H

void print(double arr[], std::size_t size, std::string filename);
int load(double arr[], std::size_t size, std::string filename);
void sort(double arr[], std::size_t size);
void swap(double& x, double& y);

#endif // LAB2_H