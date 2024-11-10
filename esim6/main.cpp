#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    Student *objStudent1= new Student;
    objStudent1 ->setFname("Liisa");
    objStudent1->setLname("Virta");
    objStudent1 ->setEmail("liisa-virta@testi.testi");
    Student *objStudent2 =new Student ("Teppo", "Testi", "Teppo.testi@oma.com");
    objStudent1->studentInfo();
    objStudent2->studentInfo();
    delete objStudent1;
    objStudent1=nullptr;
    delete objStudent2;
    objStudent2=nullptr;




}
