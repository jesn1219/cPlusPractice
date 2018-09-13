//
// Created by JESN on 12/09/2018.
//

#ifndef UNTITLED_CELLPOOL_H
#define UNTITLED_CELLPOOL_H

#include "Cell.h"
#include "Gene.h"
#include "Gene.cpp"


class CellPool {
public:
    CellPool();
    CellPool(int numberOfCell, int numberOfGene);
    int identityNumber;
    int CellidentityNumbering;
    Cell* pool;
    Gene* genePool;


};


#endif //UNTITLED_CELLPOOL_H
