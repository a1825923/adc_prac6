#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"

class Mutator {
public:
    virtual ~Mutator() = default;
    virtual Individual mutate(Individual i, int k) = 0;
};


#endif //PRAC6_DNA_MUTATOR_H
