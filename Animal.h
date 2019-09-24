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


static std::string continent_names_arr[] = {"ASIA", "EUROPE", "AFRICA","NORTH_AMERICA","SOUTH_AMERICA",
                                         "AUSTRALIA", "ANTARCTICA","WATER"};
static std::string food_types_arr[] = {"BREAD", "DOG FOOD", "FISH","MEAT","VEGETABLES"};
class Animal {
public:
    Animal(std::string name);
    virtual ~Animal(){};
    virtual void print()const=0;
    virtual std::string get_species()const =0;
    virtual unsigned char get_life_expectancy()const =0;
    virtual const strList& get_continents()const =0;
    virtual const strList& get_food_types()const =0;
    virtual unsigned char get_speed_in_kmh()const =0;
    friend std::ostream& operator<<(std::ostream& os, const Animal* dt);
protected:
    std::string m_name;
};
inline Animal::Animal(std::string _name){
    m_name=_name;
}

inline std::ostream& operator<<(std::ostream& os, const Animal* an){

    os<<"Name: "<<an->m_name<<"\nspecies: "<<an->get_species()<<"\nlife expectancy: "<<+an->get_life_expectancy()<<"\nspeed in km/h: "<<+an->get_speed_in_kmh();
    os<<"\nconitents:";
    strList::const_iterator it = an->get_continents().begin();
    for ( ; it != an->get_continents().end(); )
        os << ' ' << *it++;
    os<<"\nfood types:";
    it = an->get_food_types().begin();
    for ( ; it != an->get_food_types().end(); ++it)
        os << ' ' << *it<<',';
    os<<std::endl;
    return os;
}

#endif //ZOO_ANIMAL_H
