#ifndef CAT_H
#define CAT_H

#include "Agent.h"
#include <stdexcept>
#include <queue>

class Cat: public Agent {
public:
    explicit Cat():Agent(){};
    Point2D Move(World *) override;
};

#endif  // CAT_H
