//
// Created by JESN on 13/09/2018.
//

#ifndef UNTITLED_GENE_H
#define UNTITLED_GENE_H


class Gene {
public:
    Gene(int Quantity);
    Gene(Gene M, Gene F);


    int geneQuantity;
    int* genePointer;
    void printGene();
};


#endif //UNTITLED_GENE_H
