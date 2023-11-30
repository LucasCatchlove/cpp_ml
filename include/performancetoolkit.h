#ifndef MYNAMESPACE_H
#define MYNAMESPACE_H

#include <vector>

namespace performancetoolkit
{
    typedef std::vector<std::vector<double>> Matrix;
    template <typename Func, typename... Args>

    void time(Func func, Args &&...args);
    Matrix createSquareMatrix(size_t size);
}

#endif