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
    friend std::ostream& operator<<(std::ostream& os, const Bird& dt);

private:
    size_t m_height;
    unsigned char m_wing_span;

};
inline Bird::Bird(std::string name,std::string species,unsigned char life_expectancy,strList continents,
                  strList food_types, unsigned char speed_in_kmh,size_t _height,unsigned char _wing_span)
        :Animal(name,species,life_expectancy,continents,food_types,speed_in_kmh),m_height(_height),m_wing_span(_wing_span){}
inline void Bird::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const Bird& dt){
    std::cout<<(Animal*)&dt;
    std::cout<< "height: "<<+dt.m_height<<"\nwing span: "<<+dt.m_wing_span<<std::endl;
    return os;

}
#endif //ZOO_BIRD_H
