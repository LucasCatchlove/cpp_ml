#include "performancetoolkit.h"
#include <iostream>
#include <utility>
#include <chrono>

performancetoolkit::Matrix performancetoolkit::createSquareMatrix(size_t size)
{
    performancetoolkit::Matrix matrix(size, std::vector<double>(1, 0.0));

    // You can initialize the matrix with values or leave it with default (0.0) values

    // Example: initializing the diagonal with 1.0
    for (size_t i = 0; i < size; ++i)
    {
        matrix[i][0] = i * 3;
    }

    return matrix;
}