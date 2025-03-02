#ifndef BLUE_GHOST_FACTORY_H
#define BLUE_GHOST_FACTORY_H

#include "GhostFactory.h"
#include "BlueGhost.h"
#include "ChaseStrategy.h"  // Use a chase strategy as default

class BlueGhostFactory : public GhostFactory {
public:
    Ghost* createGhost() override {
        // Create a BlueGhost with a default ChaseStrategy
        return new BlueGhost(new ChaseStrategy());
    }
};

#endif
