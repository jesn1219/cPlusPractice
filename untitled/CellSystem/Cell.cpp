//
// Created by JESN on 12/09/2018.
//
#ifndef CELL_CPP
#define CELL_CPP


#include "Cell.h"
#include <iostream>


Cell::Cell() {
    //identityNumber setting required
    this->identityNumber = 1;
}

void Cell::initialize() {
    for (int i = 0; i < 10; i++) {
        this->gene[i] = rand()%21+1;

    }
}

#endif //