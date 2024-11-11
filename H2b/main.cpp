#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_1=Car("Ford", "Focus", 2024);
    Car objCar_2=Car("Tesla", "model3", 2023);
    Car objCar_3=Car("Skoda", "model 5", 2005);

    //Lisätään oliot listaan
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    //Tulostetaan toisen auton tiedot
    carList[1].printData();

    //Tulostetaan kaikkien autojen tiedot.
    cout<<"Kaikkien autojen tiedot"<<endl;
    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
}
