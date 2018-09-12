#include <iostream>


#include "testclass.cpp"
#include "CellSystem/Cell.cpp"
#include "CellSystem/CellPool.cpp"
#include <time.h>
#include "Lecture/LecturePractice.cpp"
#include "basicFuntions.cpp"

testclass testcell;



/*불완전 cell pool */

using namespace std;
LecturePractice lecture;

int main() {

    cout << "Program initialize....." << endl;
    srand(time(NULL));
    lecture.cinGetLine();
    bf::bftest();


    /*
    Cell cell;
    cell.initialize();
    cout << cell.gene[2] << endl;
    */



    std::cout << "Testing Github....." << std::endl;

    return 0;
}