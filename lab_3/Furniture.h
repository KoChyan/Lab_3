//
// Created by lllalll7l on 28.02.2020.
//

#ifndef LAB_3_FURNITURE_H
#define LAB_3_FURNITURE_H


#include "Product.h"

class Furniture : public Product {
protected:
    string material;
public:
    void setMaterial(string material);
    string getMaterial() const;
};


#endif //LAB_3_FURNITURE_H
