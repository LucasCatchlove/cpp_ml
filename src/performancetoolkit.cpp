#include "performancetoolkit.h"
#include <iostream>
#include <utility>
#include <chrono>

performancetoolkit::Matrix performancetoolkit::createSquareMatrix(size_t size)
{
    performancetoolkit::Matrix matrix(size, std::vector<double>(1, 0.0));

    for (size_t i = 0; i < size; ++i)
    {
        matrix[i][0] = 1;
    }

    return matrix;
}