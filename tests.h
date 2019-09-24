//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_TESTS_H
#define ZOO_TESTS_H

#include "Mammals.h"
#include "Bird.h"
#include "SeaCreatures.h"
#include "Lion.h"
#include "Dog.h"
#include "Whale.h"
#include "Monkey.h"
#include "Shark.h"
#include "SnowyOwl.h"
#include "Goose.h"
#include "Clownfish.h"
#include <vector>
#include "Zoo.h"
typedef std::vector<Animal*> animalVecor ;
class Tests {
    Zoo zoo;
public:
    void initialize_zoo();
    void generic_print();
    void test_clear_zoo();
};


#endif //ZOO_TESTS_H
