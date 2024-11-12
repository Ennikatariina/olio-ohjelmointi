#include "italianchef.h"
#include <iostream>

string ItalianChef::getName() const
{
    return name;
}
ItalianChef::ItalianChef(string n):Chef(n)
{

    cout<<"Italian Chef "<<this->getName()<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian Chef "<<getName()<<" destruktori"<<endl;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << getName() << " makes pasta." << endl;

}






