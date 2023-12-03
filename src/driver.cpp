#include "matrixtoolkit.h"
#include "performancetoolkit.h"

int main()
{
    using namespace matrixtoolkit;
    using namespace performancetoolkit;
    Matrix m{{1, 1, 1}, {1, 2, 1}, {1, 1, 1}};
    Matrix c{{1, 5, 1}, {2, 2, 1}, {1, 4, 1}};
    Matrix res = mult(m, c);
    Matrix tmat = trans(c);
    printmat(res);
    printmat(tmat);
    Matrix a = createSquareMatrix(1000);
    Matrix b = createSquareMatrix(1000);
    std::cout << a.size() << " " << b[0].size() << std::endl;
    perftime(mult, a, b);
    // time(mult_novec, a, b);
}