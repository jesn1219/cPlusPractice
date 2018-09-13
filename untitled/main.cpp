#include <iostream>


#include "testclass.cpp"
#include "CellSystem/Cell.cpp"
#include "CellSystem/CellPool.cpp"
#include "CellSystem/geneAlgorithm.cpp"
#include "CellSystem/Gene.cpp"


#include <time.h>
#include "basicFunctions.cpp"



testclass testcell;



/*불완전 cell pool */

using namespace std;
int main() {

    cout << "Program initialize....." << endl;
    srand(time(NULL));




    //matingGene testing...

    Gene testGene(5);
    Gene testGene2(5);

    testGene.printGene();
    testGene2.printGene();



    /*
    Cell cell;
    cell.initialize();
    cout << cell.gene[2] << endl;
    */



    std::cout << "Testing Github....." << std::endl;

    return 0;
}