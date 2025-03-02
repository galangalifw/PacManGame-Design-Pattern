#ifndef GHOST_FACTORY_H
#define GHOST_FACTORY_H

#include "Ghost.h"

class GhostFactory {
public:
    virtual Ghost* createGhost() = 0;
    virtual ~GhostFactory() {}
};

#endif
