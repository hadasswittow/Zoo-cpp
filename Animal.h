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
    std::string m_species;
    unsigned char m_life_expectancy;
    mutable strList m_continents;
    mutable strList m_food_types;
    unsigned char m_speed_in_kmh;

};
inline Animal::Animal(std::string _name,std::string _species,unsigned char _life_expectancy,strList _continents,strList _food_types, unsigned char _speed_in_kmh){
    m_name=_name;
    m_species=_species;
    m_life_expectancy=_life_expectancy;
    m_continents=_continents;
    m_food_types=_food_types;
    m_speed_in_kmh=_speed_in_kmh;
}
inline std::ostream& operator<<(std::ostream& os, const Animal* an){

    os<<"Name: "<<an->m_name<<"\nspecies: "<<an->m_species<<"\nlife expectancy: "<<+an->m_life_expectancy<<"\nspeed in km/h: "<<+an->m_speed_in_kmh;
    os<<"\nconitents:";
    strList::iterator it = an->m_continents.begin();
    for ( ; it != an->m_continents.end(); ++it)
        os << ' ' << *it;
    os<<"\nfood types:";
    it = an->m_food_types.begin();
    for ( ; it != an->m_food_types.end(); ++it)
        os << ' ' << *it<<',';
    os<<std::endl;

    return os;
}

#endif //ZOO_ANIMAL_H
