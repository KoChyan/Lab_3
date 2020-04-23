//
// Created by lllalll7l on 23.04.2020.
//

#include "Table.h"
Table::Table(){
    setName("nun");
    setSize(0);
    setColor("nun");
    setMaterial("nun");
}
Table::Table(string name, int size, string color, string material){
    setName(name);
    setSize(size);
    setColor(color);
    setMaterial(material);
}
void Table::print(){
    cout << "Name: " << getName() << endl;
    cout << "Size: " << getSize() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Material: " << getMaterial() << endl;
}
