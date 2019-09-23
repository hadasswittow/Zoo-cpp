//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <iostream>
#include <list>
#include <string>
using std::list;
typedef list<std::string> strList;

class Animal {
public:
    Animal(std::string name,std::string species,unsigned char life_expectancy,strList continents,strList food_types, unsigned char speed_in_kmh);
    virtual ~Animal(){};
    virtual void print()const =0;
protected:
    void print_animal_basics()const;
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


#endif //ZOO_ANIMAL_H
