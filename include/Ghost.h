#ifndef GHOST_H
#define GHOST_H

#include <iostream>

class Ghost {
public:
    virtual void move() = 0;
    virtual ~Ghost() {}
};

#endif
