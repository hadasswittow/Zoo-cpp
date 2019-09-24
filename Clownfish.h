//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_CLOWNFISH_H
#define ZOO_CLOWNFISH_H

#include "SeaCreatures.h"
namespace {
    class Clownfish : public SeaCreatures {
    public:
        Clownfish(std::string name) : Animal(name), SeaCreatures(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Clownfish &an);

        /*virtual*/void print() const;

        /*virtual*/ std::string get_species() const;

        /*virtual*/ unsigned char get_life_expectancy() const;

        /*virtual*/ const strList& get_continents() const;
        /*virtual*/ const strList& get_food_types() const;

        /*virtual*/ unsigned char get_speed_in_kmh() const;
        // sea creatures adds
        /*virtual*/ size_t get_lowest_depth() const;

    private:
        static strList get_continents_list();

        static strList get_food_list();

        static const std::string s_species;
        static const unsigned char s_life_expectancy = 25;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 50;
        static const size_t s_lowest_depth = 10000;
    };

    const std::string Clownfish::s_species = "Clownfish";
    const strList Clownfish::s_continents = Clownfish::get_continents_list();
    const strList Clownfish::s_food_types = Clownfish::get_food_list();
}


inline std::ostream& operator<<(std::ostream& os, const Clownfish& an) {
    std::cout<<(SeaCreatures*)&an;
    return os;
}
inline void Clownfish::print()const{
    std::cout<<this;
}
inline strList Clownfish::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[7]);
    return lst;
}
inline strList Clownfish::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[2]);
    return lst;
}
inline std::string Clownfish::get_species()const {
    return Clownfish::s_species;
}
inline unsigned char Clownfish::get_life_expectancy()const{
    return Clownfish::s_life_expectancy;
}
inline const strList& Clownfish::get_continents()const{
    return Clownfish::s_continents;
}
inline const strList& Clownfish::get_food_types()const{
    return Clownfish::s_food_types;
}

inline unsigned char Clownfish::get_speed_in_kmh()const{
    return Clownfish::s_speed_in_kmh;
}
inline size_t Clownfish::get_lowest_depth() const {
    return Clownfish::s_lowest_depth;
}


#endif //ZOO_CLOWNFISH_H
