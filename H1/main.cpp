#include "functions.h"
#include <iostream>


using namespace std;

int main()
{
    cout << "Hello!" << endl;
    cout << "Anna kaksi kokonaislukua, niin lasken niiden summan ja osamaaran" << endl;

    int a;
    int b;

    cout<<"Anna ensimmäinen positiivinen kokonaisluku"<<endl;
    cin>>a;
    cout<<"Anna toinen positiivinen kokonaisluku"<<endl;
    cin>>b;

    calcSum(a, b);
    calcDiv(a, b);
    int sum=retSum(a,b);
    cout << "Summa on " << sum <<endl;
    int div=retDiv(a,b);
    if (div == 0){

    }else{
    cout << "Osamäärä on " << div <<endl;
    }

    int m=4;
    int n=5;
    int c= m*n;
    c=c*2;
    c=c+1;
    cout<< c<<endl;
}


