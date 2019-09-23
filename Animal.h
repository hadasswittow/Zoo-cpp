//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <list>
#include <string>
using std::list;

#include <iostream>
typedef list<std::string> strList;

class Animal {
public:
    virtual void print()const =0;
    Animal(std::string name,std::string species,unsigned char life_expectancy,strList continents,strList food_types, unsigned char speed_in_kmh);
    virtual ~Animal(){};
protected:
    void print_animal_basics()const;
    std::string name;
    std::string species;
    unsigned char life_expectancy;
    mutable strList continents;
    mutable strList food_types;
    unsigned char speed_in_kmh;

};
inline void Animal::print_animal_basics()const{
    std::cout<<"Name: "<<name<<"\nspecies: "<<species<<"\nlife expectancy: "<<life_expectancy<<"\nspeed in km/h: "<<speed_in_kmh;
    std::cout<<"\nconitents:";
    strList::iterator it = continents.begin();
    for ( ; it != continents.end(); ++it)
        std::cout << ' ' << *it;
    std::cout<<"\nfood types:";
    it = food_types.begin();
    for ( ; it != food_types.end(); ++it)
        std::cout << ' ' << *it;

}

inline Animal::Animal(std::string _name,std::string _species,unsigned char _life_expectancy,strList _continents,strList _food_types, unsigned char _speed_in_kmh){
    name=_name;
    species=_species;
    life_expectancy=_life_expectancy;
    continents=_continents;
    food_types=_food_types;
    speed_in_kmh=_speed_in_kmh;
}

#endif //ZOO_ANIMAL_H
