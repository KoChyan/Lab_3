#include <type_traits>
#include <string>
#include <iostream>
using namespace std;
//
// Created by lllalll7l on 28.02.2020.
//

#ifndef LAB_3_PRODUCT_H
#define LAB_3_PRODUCT_H

 class Product {
 protected:
    string name;
    int size;
    string color;
 public:
virtual void print() = 0;
void setName(string name);
string getName() const;
void setColor(string color);
string getColor() const;
void setSize(int size);
int getSize() const;
};


#endif //LAB_3_PRODUCT_H
