#include <iostream>
#include <vector>
#include <chrono>
#include "matrixtoolkit.h"

matrixtoolkit::Matrix add(const matrixtoolkit::Matrix &a, const matrixtoolkit::Matrix &b)
{
    if (a.size() != b.size() && a[0].size() != b[0].size())
    {
        throw std::runtime_error("add(a,b): Dimensions of a and b must be the same");
    }

    int cols = a.size();
    int rows = a[0].size();

    matrixtoolkit::Matrix result(rows, std::vector<double>(cols, 0.0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    return result;
}

matrixtoolkit::Matrix subt(const matrixtoolkit::Matrix &a, const matrixtoolkit::Matrix &b)
{
    if (a.size() != b.size() && a[0].size() != b[0].size())
    {
        throw std::runtime_error("subt(a,b): Dimensions of a and b must be the same");
    }

    int rows = a[0].size();
    int cols = a.size();

    matrixtoolkit::Matrix result(rows, std::vector<double>(cols, 0.0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    return result;
}
#pragma clang optimize off
matrixtoolkit::Matrix mult_novec(const matrixtoolkit::Matrix &a, const matrixtoolkit::Matrix &b)
{

    if (a[0].size() != b.size())
    {
        throw std::runtime_error("mult(a,b): a.N does not match b.M (for M x N matrices)");
    }

    int rows = a.size();
    int cols = b[0].size();
    int common_dim = b.size();

    matrixtoolkit::Matrix result(rows, std::vector<double>(cols, 0.0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double temp = 0.0;
            for (int k = 0; k < common_dim; k++)
            {
                temp += a[i][k] * b[k][j];
            }
            result[i][j] = temp;
        }
    }

    return result;
}
#pragma clang optimize on

matrixtoolkit::Matrix mult(const matrixtoolkit::Matrix &a, const matrixtoolkit::Matrix &b)
{

    if (a[0].size() != b.size())
    {
        throw std::runtime_error("mult(a,b): a.N does not match b.M (for M x N matrices)");
    }

    int rows = a.size();
    int cols = b[0].size();
    int common_dim = b.size();

    matrixtoolkit::Matrix result(rows, std::vector<double>(cols, 0.0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double temp = 0.0;
            for (int k = 0; k < common_dim; k++)
            {
                temp += a[i][k] * b[k][j];
            }
            result[i][j] = temp;
        }
    }

    return result;
}

matrixtoolkit::Matrix trans(const matrixtoolkit::Matrix &m)
{
    int rows = m.size();
    int cols = m[0].size();

    matrixtoolkit::Matrix result(rows, std::vector<double>(cols, 0.0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = m[j][i];
        }
    }

    return result;
}

void printmat(const matrixtoolkit::Matrix &m)
{
    int rows = m.size();
    int cols = m[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
