//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_SHARK_H
#define ZOO_SHARK_H

#include "SeaCreatures.h"


namespace {
    class Shark : public SeaCreatures {
    public:
        Shark(std::string name) : Animal(name), SeaCreatures(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Shark &dt);

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

    const std::string Shark::s_species = "Shark";
    const strList Shark::s_continents = Shark::get_continents_list();
    const strList Shark::s_food_types = Shark::get_food_list();
}

inline std::ostream& operator<<(std::ostream& os, const Shark& an) {
    std::cout<<(SeaCreatures*)&an;
    return os;
}
inline void Shark::print()const{
    std::cout<<this;
}
inline strList Shark::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[7]);
    return lst;
}
inline strList Shark::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[2]);
    return lst;
}
inline std::string Shark::get_species()const {
    return Shark::s_species;
}
inline unsigned char Shark::get_life_expectancy()const{
    return Shark::s_life_expectancy;
}
inline const strList& Shark::get_continents()const{
    return Shark::s_continents;
}
inline const strList& Shark::get_food_types()const{
    return Shark::s_food_types;
}

inline unsigned char Shark::get_speed_in_kmh()const{
    return Shark::s_speed_in_kmh;
}
inline size_t Shark::get_lowest_depth() const {
    return Shark::s_lowest_depth;
}


#endif //ZOO_SHARK_H
