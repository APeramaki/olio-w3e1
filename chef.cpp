#include "chef.h"
#include <iostream>

Chef::~Chef(){
     cout << "Chef " << _name << " destruktori" << endl;
}


Chef::Chef() {}

Chef::Chef(string name) {
    _name = name;
    cout << "Chef " << _name << " konstruktori" << endl;
};


void Chef::makeSalad(){
    cout << "Chef " << _name << " makes salad" << endl;
};

void Chef::makeSoup(){
    cout << "Chef " << _name << " makes soup" << endl;
}

string Chef::getName(){
    return _name;
}
