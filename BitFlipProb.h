#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
#include <random>

class BitFlipProb : public Mutator {
private:
    std::uniform_real_distribution<double> distribution;

    double p;
public:
    BitFlipProb(double p);
    Individual mutate(Individual i, int k);
};


#endif //PRAC6_DNA_BITFLIPPROB_H
