#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine()
{
    objEngine=Engine(150, 2);
}

void Car::setWheel()
{
    objWheel1=Wheel(17, "kesarengas");
    objWheel2=Wheel(17, "kesarengas");
    objWheel3=Wheel(17, "kesarengas");
    objWheel4=Wheel(17, "kesarengas");
}
void Car::printDetails()
{

    cout<<"Auto: " <<model<<" "<< brand<<endl;
    cout <<"Moottori: "<<objEngine.getHorsepower()<< " hp "<<objEngine.getDisplacement()<<" L"<<endl;
    cout <<"Rengas 1: " <<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout <<"Rengas 2: " <<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout <<"Rengas 3: " <<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout <<"Rengas 4: " <<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
}



Car::Car() {}

Car::Car(string b, string m)
{
    model=m;
    brand=b;
    this ->setModel(model);
    this ->setBrand(brand);
}
