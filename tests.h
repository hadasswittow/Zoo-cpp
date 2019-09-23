//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_TESTS_H
#define ZOO_TESTS_H

#include "Mammals.h"
#include "Bird.h"
#include "SeaCreatures.h"
#include <vector>
typedef std::vector<Animal*> animalVecor ;
class Tests {
public:
    animalVecor animals;
    void initialize_zoo();
    void generic_print();

};


#endif //ZOO_TESTS_H
