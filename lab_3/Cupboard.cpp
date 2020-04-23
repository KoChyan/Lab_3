//
// Created by lllalll7l on 28.02.2020.
//

#include "Cupboard.h"
void Cupboard::setNumberOfShelves(int numberOfShelves) {
    this->numberOfShelves = numberOfShelves;
}
int Cupboard::getNumberOfShelves() const {return numberOfShelves;}
Cupboard::Cupboard(){
    setName("nun");
    setSize(0);
    setColor("nun");
    setNumberOfShelves(0);
    setMaterial("nun");
}
Cupboard::Cupboard(string name, int size, string color, int numberOfShelves, string material){
    setName(name);
    setSize(size);
    setColor(color);
    setNumberOfShelves(numberOfShelves);
    setMaterial(material);
}


void Cupboard::print(){
    cout << "Name: " << getName() << endl;
    cout << "Size: " << getSize() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "NumberOfShelves: " << getNumberOfShelves() << endl;
    cout << "Material: " << getMaterial() << endl;
}
