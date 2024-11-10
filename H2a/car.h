#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brad;
    string model;
    int yearModel;

public:
    Car();
    void setBrad(const string &newBrad);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
    void printData ();
};

#endif // CAR_H
