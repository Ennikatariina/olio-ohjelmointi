#include <iostream>
#include "car.h"

using namespace std;

int main()
{

    Car objCar("Toyota", "Corolla");
    objCar.setEngine();
    objCar.setWheel();
    objCar.printDetails();


        return 0;
}
