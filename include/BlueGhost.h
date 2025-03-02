#ifndef BLUE_GHOST_H
#define BLUE_GHOST_H

#include "Ghost.h"
#include "MovementStrategy.h"
#include <iostream>

class BlueGhost : public Ghost {
private:
    MovementStrategy* strategy;
public:
    BlueGhost(MovementStrategy* initialStrategy) : strategy(initialStrategy) {}

    void setStrategy(MovementStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void move() override {
        if (strategy)
            strategy->move(this);
        else
            std::cout << "BlueGhost moves with default behavior.\n";
    }
};

#endif
