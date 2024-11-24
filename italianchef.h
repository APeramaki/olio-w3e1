#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : private Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();

    void makesPasta();
    string getName();
};

#endif // ITALIANCHEF_H
