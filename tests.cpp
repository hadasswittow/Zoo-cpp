//
// Created by hadasswittow on 9/23/19.
//

#include "tests.h"

void Tests::initialize_zoo(){

    Lion *Simba=new Lion("Simba");

    Lion *Mufasa=new Lion("Mufasa");
    Dog *Toto=new Dog("Toto");


    Monkey *Rafiki=new Monkey("Rafiki");

    Goose *Morten=new Goose("Morten");
    Goose *Akka=new Goose("Akka");
    SnowyOwl *Hedwig=new SnowyOwl("Hedwig");

    Shark *Jaws=new Shark("Jaws");
    Clownfish *Nemo=new Clownfish("Nemo");
    Whale *Willy=new Whale("Willy");

    zoo.add_animal(Simba);
    zoo.add_animal(Mufasa);
    zoo.add_animal(Toto);
    zoo.add_animal(Rafiki);
    zoo.add_animal(Morten);
    zoo.add_animal(Akka);
    zoo.add_animal(Hedwig);
    zoo.add_animal(Jaws);
    zoo.add_animal(Nemo);
    zoo.add_animal(Willy);
}
void Tests::generic_print(){
    zoo.generic_print();
}
void Tests::test_clear_zoo(){
    zoo.clear_zoo();
}