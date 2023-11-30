#include <iostream>
#include <vector>
#include <chrono>

namespace matrixtoolkit
{
    typedef std::vector<std::vector<double>> Matrix;

    Matrix add(const Matrix &a, const Matrix &b);
    Matrix subt(const Matrix &a, const Matrix &b);
    Matrix mult(const Matrix &a, const Matrix &b);
    Matrix trans(const Matrix &m);
    void printmat(const Matrix &m);
    // Matrix mult_novec(const Matrix &a, const Matrix &b);

}
