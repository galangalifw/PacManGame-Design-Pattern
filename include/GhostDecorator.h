#ifndef GHOST_DECORATOR_H
#define GHOST_DECORATOR_H

#include "Ghost.h"

class GhostDecorator : public Ghost {
protected:
    Ghost* decoratedGhost;
public:
    GhostDecorator(Ghost* ghost) : decoratedGhost(ghost) {}
    virtual ~GhostDecorator() { delete decoratedGhost; }
};

#endif
