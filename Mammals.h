//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_MAMMALS_H
#define ZOO_MAMMALS_H


#include "Animal.h"

class Mammals : public Animal{
public:
    Mammals(std::string name,std::string species,unsigned char life_expectancy,strList continents,
            strList food_types, unsigned char speed_in_kmh,unsigned char _duration_of_pregnancy,
    unsigned char _young_in_litter);
    /*virtual*/void print()const;
    friend std::ostream& operator<<(std::ostream& os, const Mammals& dt);


private:
    unsigned char duration_of_pregnancy;
    unsigned char young_in_litter;

};
inline Mammals::Mammals(std::string name,std::string species,unsigned char life_expectancy,strList continents,
strList food_types, unsigned char speed_in_kmh,unsigned char _duration_of_pregnancy,
unsigned char _young_in_litter):Animal(name,species,life_expectancy,continents,food_types,speed_in_kmh),
duration_of_pregnancy(_duration_of_pregnancy),young_in_litter(_young_in_litter){}

inline void Mammals::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const Mammals& an) {
    std::cout<<(Animal*)&an;
    std::cout<< "duration of pregnancy: "<<+an.duration_of_pregnancy<<"\nnumber of young born in each litter: "<<+an.young_in_litter<<std::endl;
}
#endif //ZOO_MAMMALS_H
