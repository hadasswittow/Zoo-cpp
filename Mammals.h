//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_MAMMALS_H
#define ZOO_MAMMALS_H


#include "Animal.h"

class Mammals : virtual public Animal{
public:

    Mammals(std::string name);
    virtual ~Mammals(){};
    /*virtual*/void print()const;
    friend std::ostream& operator<<(std::ostream& os, const Mammals* an);
    virtual std::string get_species()const =0;
    virtual unsigned char get_life_expectancy()const =0;
    virtual const strList& get_continents()const =0;
    virtual const strList& get_food_types()const =0;
    virtual unsigned char get_speed_in_kmh()const =0;
    // mammals adds:
    virtual unsigned char get_duration_of_pregnancy()const=0;
    virtual unsigned char get_young_in_litter()const=0;

};
inline Mammals::Mammals(std::string name):Animal(name){}

inline void Mammals::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const Mammals* an) {
    std::cout<<(Animal*)an;
    std::cout<< "duration of pregnancy: "<<+an->get_duration_of_pregnancy()<<"\nnumber of young born in each litter: "<<+an->get_young_in_litter()<<std::endl;
    return os;
}
#endif //ZOO_MAMMALS_H
