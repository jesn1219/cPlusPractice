//
// Created by JESN on 13/09/2018.
//




#ifndef GENEALGORITHM_CPP
#define GENEALGORITHM_CPP

#include <iostream>
#include "Gene.cpp"




namespace gal {

    void test();
    int* matingGene(int unitA[], int unitB[], int quntity );

    void matingGene2(int* NewGenePointer, Gene M, Gene F);


}

void gal::test() {

    std::cout<< "Testing.." << std::endl;

}


int * gal::matingGene(int *unitA, int *unitB, int quntity) {
    int * unitNew = (int*)malloc(quntity*sizeof(int));

    for (int i = 0; i < quntity; i++ ) {
        *(unitNew+i) = ( *(unitA+i) + *(unitB+i) )* 0.5 ;

    }

    return unitNew;
}

void gal::matingGene2(int* NewGenePointer, Gene M, Gene F) {
    int Quauntity = M.geneQuantity;

    for (int i = 0; i < Quauntity; i++ ) {
        *(NewGenePointer+i) = (*(M.genePointer+i) + *(F.genePointer+i)) * 0.5;

    }



}

#endif
