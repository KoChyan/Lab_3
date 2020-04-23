//
// Created by lllalll7l on 23.04.2020.
//

#include "Rack.h"
void Rack::setNumberOfSections(int numberOfSections) {
    this->numberOfSections = numberOfSections;
}
int Rack::getNumberOfSections()  const {return numberOfSections;}
Rack::Rack(){
    setName("nun");
    setSize(0);
    setColor("nun");
    setNumberOfSections(0);
    setMaterial("nun");
}
Rack::Rack(string name, int size, string color, int numberOfSections, string material){
    setName(name);
    setSize(size);
    setColor(color);
    setNumberOfSections(numberOfSections);
    setMaterial(material);
}
void Rack::print(){
    cout << "Name: " << getName() << endl;
    cout << "Size: " << getSize() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "NumberOfSections: " << getNumberOfSections() << endl;
    cout << "Material: " << getMaterial() << endl;
}
