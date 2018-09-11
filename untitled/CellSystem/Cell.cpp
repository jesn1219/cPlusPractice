//
// Created by JESN on 12/09/2018.
//

#include "Cell.h"
#include <iostream>


Cell::Cell() {
    //identityNumber setting required
}

void Cell::initialize() {
    for (int i = 0; i < 10; i++) {
        this->gene[i] = rand()%21+1;

    }
}