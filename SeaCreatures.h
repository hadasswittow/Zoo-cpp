//
// Created by hadasswittow on 9/23/19.
//

#ifndef ZOO_SEACREATURES_H
#define ZOO_SEACREATURES_H

#include "Animal.h"
#include <string>

class SeaCreatures : public Animal {
public:
    SeaCreatures(std::string name,std::string species,unsigned char life_expectancy,strList continents,
    strList food_types, unsigned char speed_in_kmh,unsigned int _lowest_depth);
    /*virtual*/void print()const;
    friend std::ostream& operator<<(std::ostream& os, const SeaCreatures& dt);

private:
    unsigned int lowest_depth;
};
inline SeaCreatures::SeaCreatures(std::string name,std::string species,unsigned char life_expectancy,strList continents,
                        strList food_types, unsigned char speed_in_kmh,unsigned int _lowest_depth)
                        :Animal(name,species,life_expectancy,continents,food_types,speed_in_kmh),lowest_depth(_lowest_depth){}

inline void SeaCreatures::print()const{
    std::cout<<this;
}
inline std::ostream& operator<<(std::ostream& os, const SeaCreatures& dt){
    std::cout<<(Animal*)&dt;
    std::cout << "lowest depth: " << +dt.lowest_depth << std::endl;
}
#endif //ZOO_SEACREATURES_H
