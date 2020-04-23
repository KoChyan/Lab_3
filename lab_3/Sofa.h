//
// Created by lllalll7l on 23.04.2020.
//

#ifndef LAB_3_SOFA_H
#define LAB_3_SOFA_H


#include "Furniture.h"

class Sofa : public Furniture {
private:
    string coating;
public:
    void setCoating(string coating);
    string getCoating();
    Sofa();
    Sofa(string name, int size, string color, string coating, string material);
    void print() override;
};


#endif //LAB_3_SOFA_H
