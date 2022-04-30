
#ifndef REARRANGE_H
#define REARRANGE_H

#include "Mutator.h"

class Rearrange : public Mutator {
public:
    Rearrange() = default;
    Individual mutate(Individual i, int k);
};


#endif //PRAC6_DNA_REARRANGE_H
