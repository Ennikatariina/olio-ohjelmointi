#include "car.h"

void Car::setBrad(const string &newBrad)
{
    brad = newBrad;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Merkki: "<< brad <<endl;
    cout <<"Malli: "<<model <<endl;
    cout <<"Valmistusvuosi: "<<yearModel<<endl;
}

Car::Car() {}
