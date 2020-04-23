//
// Created by lllalll7l on 23.04.2020.
//

#ifndef LAB_3_TABLE_H
#define LAB_3_TABLE_H


#include "Furniture.h"

class Table : public Furniture {
public:
    Table();
    Table(string name, int size, string color, string material);
    void print() override;
};


#endif //LAB_3_TABLE_H
