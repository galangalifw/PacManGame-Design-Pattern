#ifndef WANDER_STRATEGY_H
#define WANDER_STRATEGY_H

#include "MovementStrategy.h"
#include <iostream>

class WanderStrategy : public MovementStrategy {
public:
    void move(Ghost* ghost) override {
        // Simulate random wandering
        std::cout << "Ghost is wandering randomly.\n";
    }
};

#endif
