#include <iostream>
#include <vector>

std::vector<std::vector<double>> mult(std::vector<std::vector<double>> &a, std::vector<std::vector<double>> &b)
{

    if (a[0].size() != b.size())
    {
        throw std::runtime_error("Incompatible dimensions");
    }
    int rows = a.size();
    int cols = b[0].size();
    int common_dim = b.size();
    std::vector<std::vector<double>> result(rows, std::vector<double>(cols, 0.0));

#pragma clang loop vectorize(enable)
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

void printmat(std::vector<std::vector<double>> &m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<double>> m{{1, 1, 1}, {1, 2, 1}, {1, 1, 1}};
    std::vector<std::vector<double>> c{{1, 5, 1}, {2, 2, 1}, {1, 4, 1}};
    std::vector<std::vector<double>> res = mult(m, c);
    printmat(res);
}