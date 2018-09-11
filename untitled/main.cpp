#include <iostream>


#include "testclass.cpp"
#include "CellSystem/Cell.cpp"
#include "CellSystem/CellPool.cpp"
#include <time.h>


testclass testcell;



/*불완전 cell pool */

using namespace std;
int main() {
    srand(time(NULL));

    Cell cell;
    cell.initialize();
    cout << cell.gene[2] << endl;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Testing Github....." << std::endl;

    return 0;
}