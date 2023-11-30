#include "matrixtoolkit.h"

int main()
{
    Matrix m{{1, 1, 1}, {1, 2, 1}, {1, 1, 1}};
    Matrix c{{1, 5, 1}, {2, 2, 1}, {1, 4, 1}};
    Matrix res = mult(m, c);
    Matrix tmat = trans(c);
    printmat(res);
    printmat(tmat);
    Matrix a = createLargeSquareMatrix(1000);
    Matrix b = createLargeSquareMatrix(1000);
    std::cout << a.size() << " " << b[0].size() << std::endl;
    perf(mult, a, b);
    perf(mult_novec, a, b);
}