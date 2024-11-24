#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string _name;
};

#endif // CHEF_H
