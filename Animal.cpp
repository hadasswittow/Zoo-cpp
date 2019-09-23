//
// Created by hadasswittow on 9/23/19.
//

#include "Animal.h"
void Animal::print_animal_basics()const{
    std::cout<<"Name: "<<name<<"\nspecies: "<<species<<"\nlife expectancy: "<<+life_expectancy<<"\nspeed in km/h: "<<+speed_in_kmh;
    std::cout<<"\nconitents:";
    strList::iterator it = continents.begin();
    for ( ; it != continents.end(); ++it)
        std::cout << ' ' << *it;
    std::cout<<"\nfood types:";
    it = food_types.begin();
    for ( ; it != food_types.end(); ++it)
        std::cout << ' ' << *it<<',';
    std::cout<<std::endl;
}


