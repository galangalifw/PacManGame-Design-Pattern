#ifndef SPEED_BOOST_DECORATOR_H
#define SPEED_BOOST_DECORATOR_H

#include "GhostDecorator.h"

class SpeedBoostDecorator : public GhostDecorator {
public:
    SpeedBoostDecorator(Ghost* ghost) : GhostDecorator(ghost) {}

    void move() override {
        // Enhance the ghost's movement with a speed boost effect.
        std::cout << "Speed boost applied: ";
        decoratedGhost->move();
    }
};

#endif
