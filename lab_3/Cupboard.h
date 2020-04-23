//
// Created by lllalll7l on 28.02.2020.
//

#ifndef LAB_3_CUPBOARD_H
#define LAB_3_CUPBOARD_H


#include "Furniture.h"

class Cupboard : public Furniture{
private:
    int numberOfShelves;
public:
   void setNumberOfShelves(int numberOfShelves);
   int getNumberOfShelves() const;
   void print() override;
   Cupboard();
   Cupboard(string name, int size, string color, int numberOfShelves, string material);
};


#endif //LAB_3_CUPBOARD_H
