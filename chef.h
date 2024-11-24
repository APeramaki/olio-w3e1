#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    virtual ~Chef();
    void makeSalad();
    void makeSoup();
    virtual string getName();
protected:
    string _name;
};

#endif // CHEF_H
