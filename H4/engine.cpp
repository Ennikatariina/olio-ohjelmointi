#include "engine.h"

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

Engine::Engine() {

}

Engine::Engine(int a, double b)
{

    this->setDisplacement(b);
    this->setHorsepower(a);

}
