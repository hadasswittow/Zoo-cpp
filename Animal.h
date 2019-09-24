//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <iostream>
#include <list>
#include <string>
#include <iostream>
using std::list;
typedef list<std::string> strList;

class Animal {
public:
    Animal(std::string name,std::string species,unsigned char life_expectancy,strList continents,strList food_types, unsigned char speed_in_kmh);
    virtual ~Animal(){};
    virtual void print()const =0;
    friend std::ostream& operator<<(std::ostream& os, const Animal* dt);
protected:
    std::string name;
    std::string species;
    unsigned char life_expectancy;
    mutable strList continents;
    mutable strList food_types;
    unsigned char speed_in_kmh;

};
inline Animal::Animal(std::string _name,std::string _species,unsigned char _life_expectancy,strList _continents,strList _food_types, unsigned char _speed_in_kmh){
    name=_name;
    species=_species;
    life_expectancy=_life_expectancy;
    continents=_continents;
    food_types=_food_types;
    speed_in_kmh=_speed_in_kmh;
}
inline std::ostream& operator<<(std::ostream& os, const Animal* an){

    os<<"Name: "<<an->name<<"\nspecies: "<<an->species<<"\nlife expectancy: "<<+an->life_expectancy<<"\nspeed in km/h: "<<+an->speed_in_kmh;
    os<<"\nconitents:";
    strList::iterator it = an->continents.begin();
    for ( ; it != an->continents.end(); ++it)
        os << ' ' << *it;
    os<<"\nfood types:";
    it = an->food_types.begin();
    for ( ; it != an->food_types.end(); ++it)
        os << ' ' << *it<<',';
    os<<std::endl;

    return os;
}

#endif //ZOO_ANIMAL_H
