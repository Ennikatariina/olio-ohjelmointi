#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //CAR
    Car objCar;
    objCar.setBrad("Ford");
    objCar.setModel("focus");
    objCar.setYearModel(2024);
    objCar.printData();
    cout<<"-----------------------------"<<endl;
    //RECTANGLE
    Rectagle *objRectagle;
    objRectagle=new Rectagle;
    objRectagle ->setHeight(10);
    objRectagle ->setWidth(5);
    cout<<"Ympärysmitta on: "<<objRectagle->getCircum()<<endl;
    cout <<"Pinta-ala on: "<<objRectagle->getArea()<<endl;
    delete objRectagle;
    objRectagle= nullptr;

    cout<<"-----------------------------"<<endl;
    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Liisa Virta");
    objectStudent->setStudentNumber(123456);
    objectStudent->setAverage(4.3);
    cout << "Opiskelija: "<<objectStudent->getName()<<endl;
    cout <<"Opiskelinumero: "<<objectStudent->getStudentNumber()<<endl;
    cout <<"Keskiarvo: "<< objectStudent->getAverage()<<endl;
    cout<<"-----------------------------"<<endl;

}
