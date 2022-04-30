
#include "BitFlipProb.h"

Individual BitFlipProb::mutate(Individual i, int k) {
    std::default_random_engine generator;
    for (int pos = 0; pos < i.getLength(); ++pos) {
        if (distribution(generator) <= p) {
            i.flipBit(pos);
        }
    }
    return i;
}

BitFlipProb::BitFlipProb(double p) : distribution(0, 1),  p(p) {
}
