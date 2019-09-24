//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_SNOWYOWL_H
#define ZOO_SNOWYOWL_H


#include "Bird.h"
namespace {
    class SnowyOwl : public Bird {
    public:
        SnowyOwl(std::string name) : Animal(name), Bird(name) {};

        friend std::ostream &operator<<(std::ostream &os, const SnowyOwl &an);

        /*virtual*/void print() const;

        /*virtual*/ std::string get_species() const;

        /*virtual*/ unsigned char get_life_expectancy() const;

        /*virtual*/ const strList& get_continents() const;
        /*virtual*/ const strList& get_food_types() const;

        /*virtual*/ unsigned char get_speed_in_kmh() const;
        //Bird adds:
        /*virtual*/ size_t get_height() const;

        /*virtual*/ unsigned char get_wing_span() const;

    private:
        static strList get_continents_list();

        static strList get_food_list();

        static const std::string s_species;
        static const unsigned char s_life_expectancy = 10;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 30;
        static const size_t s_height = 98;
        static const unsigned char s_wing_span = 5;
    };

    const std::string SnowyOwl::s_species = "Snowy Owl";
    const strList SnowyOwl::s_continents = SnowyOwl::get_continents_list();
    const strList SnowyOwl::s_food_types = SnowyOwl::get_food_list();

}
inline std::ostream& operator<<(std::ostream& os, const SnowyOwl& an) {
    std::cout<<(Bird*)&an;
    return os;
}
inline void SnowyOwl::print()const{
    std::cout<<this;
}
inline strList SnowyOwl::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[4]);
    lst.push_back(continent_names_arr[5]);
    lst.push_back(continent_names_arr[6]);
    return lst;
}
inline strList SnowyOwl::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[4]);
    return lst;
}
inline std::string SnowyOwl::get_species()const {
    return SnowyOwl::s_species;
}
inline unsigned char SnowyOwl::get_life_expectancy()const{
    return SnowyOwl::s_life_expectancy;
}
inline const strList& SnowyOwl::get_continents()const{
    return SnowyOwl::s_continents;
}
inline const strList& SnowyOwl::get_food_types()const{
    return SnowyOwl::s_food_types;
}

inline unsigned char SnowyOwl::get_speed_in_kmh()const {
    return SnowyOwl::s_speed_in_kmh;
}
inline size_t SnowyOwl::get_height()const{
    return SnowyOwl::s_height;
}
inline unsigned char SnowyOwl::get_wing_span()const{
    return SnowyOwl::s_wing_span;
}
#endif //ZOO_SNOWYOWL_H
