//
// Created by hadasswittow on 9/24/19.
//

#ifndef ZOO_GOOSE_H
#define ZOO_GOOSE_H


#include "Bird.h"
namespace {
    class Goose : public Bird {
    public:
        Goose(std::string name) : Animal(name), Bird(name) {};

        friend std::ostream &operator<<(std::ostream &os, const Goose &an);

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
        static const unsigned char s_life_expectancy = 20;
        static const strList s_continents;
        static const strList s_food_types;
        static const unsigned char s_speed_in_kmh = 20;
        static const size_t s_height = 30;
        static const unsigned char s_wing_span = 45;

    };

    const std::string Goose::s_species = "Goose";
    const strList Goose::s_continents = Goose::get_continents_list();
    const strList Goose::s_food_types = Goose::get_food_list();

}
inline std::ostream& operator<<(std::ostream& os, const Goose& an) {
    std::cout<<(Bird*)&an;
    return os;
}
inline void Goose::print()const{
    std::cout<<this;
}

inline strList Goose::get_continents_list(){
    strList lst;
    lst.push_back(continent_names_arr[7]);
    return lst;
}
inline strList Goose::get_food_list(){
    strList lst;
    lst.push_back(food_types_arr[0]);
    lst.push_back(food_types_arr[4]);
    return lst;
}
inline std::string Goose::get_species()const {
    return Goose::s_species;
}
inline unsigned char Goose::get_life_expectancy()const{
    return Goose::s_life_expectancy;
}
inline const strList& Goose::get_continents()const{
    return Goose::s_continents;
}
inline const strList& Goose::get_food_types()const{
    return Goose::s_food_types;
}

inline unsigned char Goose::get_speed_in_kmh()const {
    return Goose::s_speed_in_kmh;
}
inline size_t Goose::get_height()const{
    return Goose::s_height;
}
inline unsigned char Goose::get_wing_span()const{
    return Goose::s_wing_span;
}


#endif //ZOO_GOOSE_H
