//
// Created by hadasswittow on 9/23/19.
//

#include "tests.h"

void Tests::initialize_zoo(){

    strList continents;
    continents.push_back("Africa");
    strList food_types;
    food_types.push_back("Bread");
    Mammals *Simba=new Mammals("Simba","Lion",30,continents,food_types,150,5,1);
    Mammals *Mufasa=new Mammals("Mufasa","Lion",30,continents,food_types,150,5,1);
    food_types.clear();
    food_types.push_back("Dog food!");
    Mammals *Toto=new Mammals("Toto","Dog",40,continents,food_types,150,5,6);

    continents.clear();
    continents.push_back("Everywhere");
    food_types.clear();
    food_types.push_back("Banana");
    Mammals *Rafiki=new Mammals("Rafiki","Monkey",25,continents,food_types,100,3,2);
    food_types.clear();
    food_types.push_back("Bread");
    Bird *Morten=new Bird("Morten","Goose",15,continents,food_types,60,50,14);
    Bird *Akka=new Bird("Akka","Goose",15,continents,food_types,60,50,14);
    Bird *Hedwig=new Bird("Hedwig","Owl",17,continents,food_types,60,50,14);

    continents.clear();
    continents.push_back("live in the water");
    food_types.push_back("other fish");
    SeaCreatures *Jaws=new SeaCreatures("Jaws","shark",30,continents,food_types,150,1500);
    SeaCreatures *Nemo=new SeaCreatures("Nemo","clownfish",30,continents,food_types,150,1000);
    zoo.add_animal(Simba);
    zoo.add_animal(Mufasa);
    zoo.add_animal(Toto);
    zoo.add_animal(Rafiki);
    zoo.add_animal(Morten);
    zoo.add_animal(Akka);
    zoo.add_animal(Hedwig);
    zoo.add_animal(Jaws);
    zoo.add_animal(Nemo);
}
void Tests::generic_print(){
    zoo.generic_print();
}