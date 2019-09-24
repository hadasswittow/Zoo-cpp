//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_ZOO_H
#define ZOO_ZOO_H

#include "Animal.h"
#include <vector>
typedef std::vector<Animal*> animalVecor ;

class Zoo {
public:
    void add_animal(Animal *animal);
    animalVecor get_animals();
    void generic_print();
    void clear_zoo();
private:
    animalVecor animals;

};

inline void Zoo::add_animal(Animal *animal){
   animals.push_back(animal);
}
inline animalVecor Zoo::get_animals(){
    return animals;
}
inline void Zoo::generic_print(){
    animalVecor::iterator it =animals.begin();
    for(;it!=animals.end();++it){
        (*it)->print();
    }
}
inline void Zoo::clear_zoo(){
    animalVecor::iterator it =animals.begin();
    for(;it!=animals.end();++it){
        delete (*it);
    }
}


#endif //ZOO_ZOO_H
