//
// Created by lllalll7l on 23.04.2020.
//

#include "Sofa.h"
void Sofa::setCoating(string coating){
    this->coating = coating;
}
string Sofa::getCoating() const {return coating;}
Sofa::Sofa(){
    setName("nun");
    setSize(0);
    setColor("nun");
    setCoating("nun");
    setMaterial("nun");
}
Sofa::Sofa(string name, int size, string color, string coating, string material){
    setName(name);
    setSize(size);
    setColor(color);
    setCoating(coating);
    setMaterial(material);
}
void Sofa::print() {
    cout << "Name: " << getName() << endl;
    cout << "Size: " << getSize() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Coating: " << getCoating() << endl;
    cout << "Material: " << getMaterial() << endl;
}
