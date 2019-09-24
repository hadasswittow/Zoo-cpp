//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_DOG_H
#define ZOO_DOG_H


#include "Mammals.h"
namespace {
    class Dog : public Mammals {
    public:
        Dog(std::string name) : Animal(name), Mammals(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Dog &an);

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
        static const unsigned char s_life_expectancy = 13;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 80;
        static const unsigned char s_duration_of_pregnancy = 2;
        static const unsigned char s_young_in_litter = 5;
    };

    const std::string Dog::s_species = "Dog";
    const strList Dog::s_continents = Dog::get_continents_list();
    const strList Dog::s_food_types = Dog::get_food_list();

}
inline std::ostream& operator<<(std::ostream& os, const Dog& an) {
    std::cout<<(Mammals*)&an;
    return os;
}
inline void Dog::print()const{
    std::cout<<this;
}
inline strList Dog::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[2]);
    lst.push_back(continent_names_arr[3]);
    lst.push_back(continent_names_arr[4]);
    return lst;
}
inline strList Dog::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[1]);
    lst.push_back(food_types_arr[3]);
    return lst;
}
inline unsigned char Dog::get_duration_of_pregnancy()const{
    return Dog::s_duration_of_pregnancy;
}
inline unsigned char Dog::get_young_in_litter()const{
    return Dog::s_young_in_litter;
}
inline std::string Dog::get_species()const {
    return Dog::s_species;
}
inline unsigned char Dog::get_life_expectancy()const{
    return Dog::s_life_expectancy;
}
inline const strList& Dog::get_continents()const{
    return Dog::s_continents;
}
inline const strList& Dog::get_food_types()const{
    return Dog::s_food_types;
}

inline unsigned char Dog::get_speed_in_kmh()const{
    return Dog::s_speed_in_kmh;
}

#endif //ZOO_DOG_H
