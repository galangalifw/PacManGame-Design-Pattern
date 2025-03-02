#ifndef RED_GHOST_FACTORY_H
#define RED_GHOST_FACTORY_H

#include "GhostFactory.h"
#include "RedGhost.h"
#include "WanderStrategy.h"  // Use a default wander strategy

class RedGhostFactory : public GhostFactory {
public:
    Ghost* createGhost() override {
        // Create a RedGhost with a default WanderStrategy
        return new RedGhost(new WanderStrategy());
    }
};

#endif
