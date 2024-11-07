#include "functions.h"
#include <iomanip>
#include <cmath>

void calcSum(int n, int m){
     cout << "Summa: " << n + m << endl;
}
void calcDiv(int n, int m){
    if (m!= 0){
        float result = static_cast<float>(n) / m;
        cout << "Osamäärä: " <<std::fixed << std::setprecision(2) <<  result << endl;
    }else{
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
    }
}

int retSum(int n, int m){
    int result = n+m;
    return result;
}
float retDiv(int n, int m){
    if (m!= 0){
    float result =static_cast<float>(n) / m;
    return result;
    }else{
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
        return 0;
    }
}
