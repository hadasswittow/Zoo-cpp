//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_MONKEY_H
#define ZOO_MONKEY_H
#include "Mammals.h"

namespace {
    class Monkey : public Mammals {
    public:
        Monkey(std::string name) : Animal(name), Mammals(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Monkey &an);

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
        static const unsigned char s_life_expectancy = 20;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 54;
        static const unsigned char s_duration_of_pregnancy = 23;
        static const unsigned char s_young_in_litter = 1;
    };

    const std::string Monkey::s_species = "Monkey";
    const strList Monkey::s_continents = Monkey::get_continents_list();
    const strList Monkey::s_food_types = Monkey::get_food_list();
}

inline std::ostream& operator<<(std::ostream& os, const Monkey& an) {
    std::cout<<(Mammals*)&an;
    return os;
}
inline void Monkey::print()const{
    std::cout<<this;
}
inline strList Monkey::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[0]);
    lst.push_back(continent_names_arr[6]);
    lst.push_back(continent_names_arr[5]);

    return lst;
}
inline strList Monkey::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[3]);
    lst.push_back(food_types_arr[4]);
    return lst;
}
inline unsigned char Monkey::get_duration_of_pregnancy()const{
    return Monkey::s_duration_of_pregnancy;
}
inline unsigned char Monkey::get_young_in_litter()const{
    return Monkey::s_young_in_litter;
}
inline std::string Monkey::get_species()const {
    return Monkey::s_species;
}
inline unsigned char Monkey::get_life_expectancy()const{
    return Monkey::s_life_expectancy;
}
inline const strList& Monkey::get_continents()const{
    return Monkey::s_continents;
}
inline const strList& Monkey::get_food_types()const{
    return Monkey::s_food_types;
}

inline unsigned char Monkey::get_speed_in_kmh()const{
    return Monkey::s_speed_in_kmh;
}


#endif //ZOO_MONKEY_H
