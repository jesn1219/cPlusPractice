//
// Created by JESN on 12/09/2018.
//

#include "LecturePractice.h"
#include <iostream>


LecturePractice::LecturePractice() {
    this->test = 3;
}

void LecturePractice::cinGetLine() {
    char a[10];

    std::cin.getline(a,10,'\n');

    std:: cout << a << std::endl;



}

