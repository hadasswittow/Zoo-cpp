//
// Created by hadasswittow on 9/23/19.
//

#include "tests.h"

void Tests::initialize_zoo(){

    list<std::string> continents;
    continents.push_back("Africa");
    strList food_types;
    //{"Bread","other animals"};
    food_types.push_back("Bread");
    Mammals Simba("Simba","Lion",30,continents,food_types,150,5,1);
    Mammals Mufasa("Mufasa","Lion",30,continents,food_types,150,5,1);
    food_types.clear();
    food_types.push_back("Dog food!");
    Mammals Toto("Toto","Dog",40,continents,food_types,150,5,6);

    continents.clear();
    continents.push_back("Everywhere");
    food_types.clear();
    food_types.push_back("Banana");
    Mammals Rafiki("Rafiki","Monkey",25,continents,food_types,100,3,2);
    food_types.clear();
    food_types.push_back("Bread");
    Bird Morten("Morten","Goose",15,continents,food_types,60,50,14);
    Bird Akka("Akka","Goose",15,continents,food_types,60,50,14);
    Bird Hedwig("Hedwig","Owl",17,continents,food_types,60,50,14);

    continents.clear();
    continents.push_back("live in the water");
    food_types.push_back("other fish");
    SeaCreatures Jaws("Jaws","shark",30,continents,food_types,150,1500);
    SeaCreatures Nemo("Nemo","clownfish",30,continents,food_types,150,1000);
    animals.push_back(&Simba);
    animals.push_back(&Mufasa);
    animals.push_back(&Toto);
    animals.push_back(&Rafiki);
    animals.push_back(&Morten);
    animals.push_back(&Akka);
    animals.push_back(&Hedwig);
    animals.push_back(&Jaws);
    animals.push_back(&Nemo);
}
void Tests::generic_print(){
    animalVecor::iterator it =animals.begin();
    for(;it!=animals.end();++it){
        (*it)->print();
    }
}
