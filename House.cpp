#include "House.h"

House::House(){
    lotNumber = 0;
    ownerName = "";
};
House::House(int newNumber, std::string newName){
    lotNumber = newNumber;
    ownerName = newName;
};
string House::get_name(){return ownerName;}; // returns the name of the house owner
int House::get_lot_number(){return lotNumber;};  // returns the house's lot number
