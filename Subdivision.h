#include "House.h"

#ifndef SUBDIVISION_H
#define SUBDIVISION_H

#include <iostream>

using namespace std;

class Subdivision{
    protected:
        int subSize;
        string subName;
        int numHouses;
        House * housesArray;


    public:
        Subdivision();                            // default constructor
        Subdivision(int max_size, std::string name);  // constructor with given subdivision size and // subdivision name
        int get_current_number_of_houses(); // returns the number of houses currently built on the the subdivision
        std::string get_name();                // returns the subdivision's name
        House * get_houses();        // returns the array of houses currently on the subdivision
        bool add_house(House new_house);

};


#endif // SUBDIVISION_H
