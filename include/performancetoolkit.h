#ifndef MYNAMESPACE_H
#define MYNAMESPACE_H

#include <vector>
#include <iostream>

namespace performancetoolkit
{
    typedef std::vector<std::vector<double>> Matrix;

    template <typename Func, typename... Args>
    void perftime(Func func, Args &&...args)
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::forward<Func>(func)(std::forward<Args>(args)...);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        std::cout << "Elapsed time: " << duration.count() * 1.0E-6 << " seconds" << std::endl;
    }
    Matrix createSquareMatrix(size_t size);
}

#endif