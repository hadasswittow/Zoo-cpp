//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "Animal.h"

class Bird : public Animal{
public:
    Bird(std::string name,std::string species,unsigned char life_expectancy,strList continents,
    strList food_types, unsigned char speed_in_kmh,size_t _height,unsigned char _wing_span);
    /*virtual*/void print()const;
private:
    size_t height;
    unsigned char wing_span;

};
inline Bird::Bird(std::string name,std::string species,unsigned char life_expectancy,strList continents,
                  strList food_types, unsigned char speed_in_kmh,size_t _height,unsigned char _wing_span)
        :Animal(name,species,life_expectancy,continents,food_types,speed_in_kmh),height(_height),wing_span(_wing_span){}
inline void Bird::print()const{
    print_animal_basics();
    std::cout<< "height: "<<height<<"\nwing span: "<<wing_span<<std::endl;
}
#endif //ZOO_BIRD_H
