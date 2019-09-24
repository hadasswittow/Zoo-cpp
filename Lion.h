//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_LION_H
#define ZOO_LION_H

#include "Mammals.h"



namespace {
    class Lion : public Mammals {
    public:
        Lion(std::string name) : Animal(name), Mammals(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Lion &an);

        /*virtual*/void print() const;

        /*virtual*/ std::string get_species() const;

        /*virtual*/ unsigned char get_life_expectancy() const;

        /*virtual*/ const strList& get_continents() const;
        /*virtual*/ const strList& get_food_types() const;

        /*virtual*/ unsigned char get_speed_in_kmh() const;
        // mammals adds:
        /*virtual*/ unsigned char get_duration_of_pregnancy() const;

        /*virtual*/ unsigned char get_young_in_litter() const;

    private:
        static strList get_continents_list();

        static strList get_food_list();

        static const std::string s_species;
        static const unsigned char s_life_expectancy = 14;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 80;
        static const unsigned char s_duration_of_pregnancy = 15;
        static const unsigned char s_young_in_litter = 5;
    };

    const std::string Lion::s_species = "Lion";
    const strList Lion::s_continents = Lion::get_continents_list();
    const strList Lion::s_food_types = Lion::get_food_list();

}
inline std::ostream& operator<<(std::ostream& os, const Lion& an) {
    std::cout<<(Mammals*)&an;
    return os;
}
inline void Lion::print()const{
    std::cout<<this;
}
inline strList Lion::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[0]);
    lst.push_back(continent_names_arr[1]);
    return lst;
}
inline strList Lion::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[3]);
    lst.push_back(food_types_arr[4]);
    return lst;
}
inline unsigned char Lion::get_duration_of_pregnancy()const{
    return Lion::s_duration_of_pregnancy;
}
inline unsigned char Lion::get_young_in_litter()const{
    return Lion::s_young_in_litter;
}
inline std::string Lion::get_species()const {
    return Lion::s_species;
}
inline unsigned char Lion::get_life_expectancy()const{
    return Lion::s_life_expectancy;
}
inline const strList& Lion::get_continents()const{
    return Lion::s_continents;
}
inline const strList& Lion::get_food_types()const{
    return Lion::s_food_types;
}

inline unsigned char Lion::get_speed_in_kmh()const{
    return Lion::s_speed_in_kmh;
}
#endif //ZOO_LION_H
