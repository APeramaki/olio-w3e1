#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    virtual ~ItalianChef();

    void makesPasta();
    string getName();
};

#endif // ITALIANCHEF_H
