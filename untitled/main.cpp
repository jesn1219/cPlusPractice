#include <iostream>


#include "testclass.cpp"
#include "CellSystem/Cell.cpp"
#include <time.h>


testclass testcell;


int main() {
    srand(time(NULL));


    Cell firstCell;
    firstCell.initialize();

    std:: cout << firstCell.gene[1]<< std::endl;


    std::cout << "Hello, World!" << std::endl;
    std::cout << "Testing Github....." << std::endl;

    return 0;
}