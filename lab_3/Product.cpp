//
// Created by lllalll7l on 28.02.2020.
//

#include "Product.h"
void Product::setName(string name) {
    this->name = name;
}
string Product::getName() {return name;}

void Product::setColor(string color) {
    this->color = color;
}
string Product::getColor() {return color;}

void Product::setSize(int size){
    this->size = size;
}
int Product::getSize(){return size;}