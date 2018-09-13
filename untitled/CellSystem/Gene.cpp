//
// Created by JESN on 13/09/2018.
//




#ifndef UNTITLED_GENE_CPP
#define UNTITLED_GENE_CPP

#include "Gene.h""
#include <iostream>

// >???????????? geneAlgorithm cpp 인클루드 뭐임


using namespace std;

Gene::Gene(int Quantity) {

    this->geneQuantity = Quantity;
    this->genePointer = (int*)malloc(Quantity*sizeof(int));

    for (int i = 0; i < Quantity; i++) {
        *(this->genePointer+i) = rand()%21; // 20으로 static 설정..
    }



}

Gene::Gene(Gene M, Gene F) {
    if (M.geneQuantity != F.geneQuantity) {
        cout << "Error, Gene Quantity isn't Match!!" << endl;

    } else {
        this->geneQuantity = M.geneQuantity;
        this->genePointer = (int*)malloc(this->geneQuantity*sizeof(int));
        gal::matingGene2(this->genePointer,M,F);




    }

}




void Gene::printGene() {
    for (int i = 0; i < this->geneQuantity ; i++) {
        cout << *(this->genePointer+i) << " ";
    }
    cout << "||||" ;
    cout << endl;

}

#endif