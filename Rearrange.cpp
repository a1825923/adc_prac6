#include "Rearrange.h"

using namespace std;

Individual Rearrange::mutate(Individual i, int k) {
    string bits = i.getString();
    k = (k - 1) % bits.size();
    return Individual(bits.substr(k) + bits.substr(0, k));
}

// xxxyyyy
// k = 12
// k = (k - 1) % 7
