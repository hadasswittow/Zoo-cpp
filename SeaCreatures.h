//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_SEACREATURES_H
#define ZOO_SEACREATURES_H

#include "Animal.h"
#include <string>

class SeaCreatures : virtual public Animal {
public:
    SeaCreatures(std::string name):Animal(name){};
    virtual ~SeaCreatures(){};
    /*virtual*/void print()const;
    friend std::ostream& operator<<(std::ostream& os, const SeaCreatures* dt);
    virtual std::string get_species()const =0;
    virtual unsigned char get_life_expectancy()const =0;
    virtual const strList& get_continents()const =0;
    virtual const strList& get_food_types()const =0;
    virtual unsigned char get_speed_in_kmh()const =0;
    //sea creatures adds
    virtual size_t get_lowest_depth()const =0;


};

inline void SeaCreatures::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const SeaCreatures* dt){
    std::cout<<(Animal*)dt;
    std::cout << "lowest depth: " << +dt->get_lowest_depth() << std::endl;
    return os;
}
#endif //ZOO_SEACREATURES_H
