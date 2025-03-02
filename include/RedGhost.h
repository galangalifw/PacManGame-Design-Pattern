#ifndef RED_GHOST_H
#define RED_GHOST_H

#include "Ghost.h"
#include "MovementStrategy.h"

class RedGhost : public Ghost {
private:
    MovementStrategy* strategy;
public:
    RedGhost(MovementStrategy* initialStrategy) : strategy(initialStrategy) {}

    void setStrategy(MovementStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void move() override {
        if (strategy)
            strategy->move(this);
        else
            std::cout << "RedGhost moves with default behavior.\n";
    }
};

#endif
