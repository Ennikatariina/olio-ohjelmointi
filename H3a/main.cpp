#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    //Chef objChef("Gordon Ramsay"); //stack eli pinomuisti. Olio tuhoutuu automaattisesti.
    ItalianChef objItaChef("Anthony Bourdain");
    objItaChef.makeSalad();
    objItaChef.makeSoup();
    objItaChef.makePasta();
    cout << "name of the Italian Chef is " << objItaChef.getName() << endl;




    return 0;
}
