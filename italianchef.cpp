#include "italianchef.h"
#include <iostream>
ItalianChef::ItalianChef() {}

ItalianChef::ItalianChef(string name) : Chef(name){
    cout << "Italian chef " << _name << " konstruktori" << endl;
}


ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << _name << " destruktori" << endl;
}

string ItalianChef::getName() {
    return _name;
}

void ItalianChef::makesPasta() {
    cout << "Italian chef " << _name << " makes pasta" << endl;
}
