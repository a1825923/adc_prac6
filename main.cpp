#include <iostream>
#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual* execute(Individual* indPtr, Mutator * mPtr, int k) {
    return new Individual(mPtr->mutate(*indPtr, k));
}

int main() {
    string binarystr1, binarystr2;
    int k1, k2;
    cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    BitFlip bit_flip;
    Rearrange rearrange;

    Individual i1(binarystr1);
    Individual i2(binarystr2);
    Individual* mutated_i1 = execute(&i1, &bit_flip, k1);
    Individual* mutated_i2 = execute(&i2, &rearrange, k2);
    cout << mutated_i1->getString() << " " << mutated_i2->getString() << " " << mutated_i2->getMaxOnes() << endl;

    delete mutated_i1;
    delete mutated_i2;
    return 0;
}
