#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    { // for cleaner printout
        Chef gordon("Gordon Ramsey");
        gordon.makeSalad();
        gordon.makeSoup();
        // deleted here
    }

    cout << endl;

    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makesPasta();
    cout << "Name of the Italian Chef is " << anthony.getName() << endl;

    return 0;
}
