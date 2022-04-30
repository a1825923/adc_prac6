#include "BitFlip.h"

Individual BitFlip::mutate(Individual i, int k) {
    int length = i.getLength();
    int index = (k - 1) % length;
    i.flipBit(index);
    return i;
}
