#ifndef CHASE_STRATEGY_H
#define CHASE_STRATEGY_H

#include "MovementStrategy.h"
#include <iostream>

class ChaseStrategy : public MovementStrategy {
public:
    void move(Ghost* ghost) override {
        // Simulate chasing Pac-Man
        std::cout << "Ghost is chasing Pac-Man.\n";
    }
};

#endif
