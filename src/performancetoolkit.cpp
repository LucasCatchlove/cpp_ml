#include "performancetoolkit.h"

void perf(Func func, Args &&...args)
{
    auto start = std::chrono::high_resolution_clock::now();
    std::forward<Func>(func)(std::forward<Args>(args)...);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Elapsed time: " << duration.count() * 1.0E-6 << "seconds" << std::endl;
}

performancetoolkit::Matrix createLargeSquareMatrix(size_t size)
{
    performancetoolkit::matrix(size, std::vector<double>(1, 0.0));

    // You can initialize the matrix with values or leave it with default (0.0) values

    // Example: initializing the diagonal with 1.0
    for (size_t i = 0; i < size; ++i)
    {
        matrix[i][0] = i * 3;
    }

    return matrix;
}