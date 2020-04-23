//
// Created by lllalll7l on 23.04.2020.
//

#ifndef LAB_3_RACK_H
#define LAB_3_RACK_H


#include "Furniture.h"

class Rack : public Furniture{
private:
    int numberOfSections;
public:
    void setNumberOfSections(int numberOfSections);
    int getNumberOfSections() const;
    Rack();
    Rack(string name, int size, string color, int numberOfSections, string material);
    void print() override;
};


#endif //LAB_3_RACK_H
