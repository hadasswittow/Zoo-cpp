//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "Animal.h"

class Bird : virtual public Animal{
public:
    Bird(std::string name):Animal(name){};
    /*virtual*/void print()const;
    friend std::ostream& operator<<(std::ostream& os, const Bird* dt);
    virtual std::string get_species()const =0;
    virtual unsigned char get_life_expectancy()const =0;
    virtual const strList& get_continents()const =0;
    virtual const strList& get_food_types()const =0;
    virtual unsigned char get_speed_in_kmh()const =0;
    //Bird adds:
    virtual size_t get_height()const =0;
    virtual unsigned char get_wing_span()const=0;


};
inline void Bird::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const Bird* dt){
    std::cout<<(Animal*)dt;
    std::cout<< "height: "<<+dt->get_height()<<"\nwing span: "<<+dt->get_wing_span()<<std::endl;
    return os;

}
#endif //ZOO_BIRD_H
