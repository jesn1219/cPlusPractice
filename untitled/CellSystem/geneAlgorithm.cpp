//
// Created by JESN on 13/09/2018.
//

#include <iostream>

#include "Gene.cpp"


namespace gene {

    void test();
    int* matingGene(int unitA[], int unitB[], int quntity )




}


void gene::test() {

    std::cout<< "Testing.." << std::endl;

}


int * gene::matingGene(int *unitA, int *unitB, int quntity) {
    int * unitNew = (int*)malloc(quntity*sizeof(int));

    for (int i = 0; i < quntity; i++ ) {
        *(unitNew+i) = ( *(unitA+i) + *(unitB+i) )* 0.5 ;

    }

    return unitNew;
}

void gene::matingGene(int* NewGenePointer, Gene M, Gene F) {

}
