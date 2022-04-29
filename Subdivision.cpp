#include "Subdivision.h"

Subdivision::Subdivision(int max_size, std::string name){
    subSize = max_size;
    subName = name;
};

int Subdivision::get_current_number_of_houses(){return numHouses;} // returns the number of houses currently built on the the subdivision

string Subdivision::get_name(){return subName;};    // returns the subdivision's name

House * Subdivision::get_houses(){return housesArray;};        // returns the array of houses currently on the subdivision

bool Subdivision::add_house(House new_house){
    housesArray = new House[numHouses];

    if((numHouses+1) >= subSize){
        return 0;
    }
    if((numHouses+1) <= subSize){
        if(numHouses = 0){
            housesArray[numHouses] = new_house;
        }
        else {housesArray[numHouses+1] = new_house;
            return 1;
        }
    }

    return 0;
}

