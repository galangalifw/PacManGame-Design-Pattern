#ifndef MOVEMENT_STRATEGY_H
#define MOVEMENT_STRATEGY_H

#include "Ghost.h"

class MovementStrategy {
public:
    virtual void move(Ghost* ghost) = 0;
    virtual ~MovementStrategy() {}
};

#endif
