//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_WHALE_H
#define ZOO_WHALE_H


#include "SeaCreatures.h"
#include "Mammals.h"
namespace {
    class Whale : public Mammals, public SeaCreatures {
    public:
        Whale(std::string name) : Animal(name), Mammals(name), SeaCreatures(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Whale &an);

        /*virtual*/void print() const;

        /*virtual*/ std::string get_species() const;

        /*virtual*/ unsigned char get_life_expectancy() const;

        /*virtual*/ const strList& get_continents() const;
        /*virtual*/ const strList& get_food_types() const;

        /*virtual*/ unsigned char get_speed_in_kmh() const;
        // mammals adds:
        /*virtual*/ unsigned char get_duration_of_pregnancy() const;

        /*virtual*/ unsigned char get_young_in_litter() const;
        //sea creatures adds
        /*virtual*/ size_t get_lowest_depth() const;

    private:
        static strList get_continents_list();

        static strList get_food_list();

        static const std::string s_species;
        static const unsigned char s_life_expectancy = 14;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 80;
        static const unsigned char s_duration_of_pregnancy = 10;
        static const unsigned char s_young_in_litter = 5;
        static const size_t s_lowest_depth = 10000;
    };

    const std::string Whale::s_species = "Whale";
    const strList Whale::s_continents = Whale::get_continents_list();
    const strList Whale::s_food_types = Whale::get_food_list();
}

inline std::ostream& operator<<(std::ostream& os, const Whale* an) {
    std::cout<<(Mammals*)an;
    std::cout << "lowest depth: " << +an->get_lowest_depth() << std::endl;
    return os;
}
inline void Whale::print()const{
    std::cout<<this;
}
inline strList Whale::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[7]);
    return lst;
}
inline strList Whale::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[2]);
    lst.push_back(food_types_arr[4]);
    return lst;
}
inline unsigned char Whale::get_duration_of_pregnancy()const{
    return Whale::s_duration_of_pregnancy;
}
inline unsigned char Whale::get_young_in_litter()const{
    return Whale::s_young_in_litter;
}
inline std::string Whale::get_species()const {
    return Whale::s_species;
}
inline unsigned char Whale::get_life_expectancy()const{
    return Whale::s_life_expectancy;
}
inline const strList& Whale::get_continents()const{
    return Whale::s_continents;
}
inline const strList& Whale::get_food_types()const{
    return Whale::s_food_types;
}

inline unsigned char Whale::get_speed_in_kmh()const{
    return Whale::s_speed_in_kmh;
}
inline size_t Whale::get_lowest_depth() const {
    return Whale::s_lowest_depth;
}
#endif //ZOO_WHALE_H
