#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>

using namespace std;

class House{
  protected:
      int lotNumber;
      string ownerName;

  public:
    House(); // a default constructor lot number is zero and owner name is an empty string ""
    House(int newNumber,string newName);// a constructor that takes the lot number and house owner name
    string get_name(); // returns the name of the house owner
    int get_lot_number();  // returns the house's lot number


};

#endif // HOUSE_H
