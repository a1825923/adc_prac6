#include "Individual.h"
//     string s(100, 'x');
Individual::Individual(int length) : binaryString(length, '0') {
//    binaryString = std::string(length, '0');
}

Individual::Individual(const std::string& binaryString) : binaryString(binaryString) {
}

std::string Individual::getString() {
    return binaryString;
}

int Individual::getBit(int pos) {
    if (pos < 0 || pos >= binaryString.size()) {
        return -1;
    }
    return binaryString[pos] - '0';
}

void Individual::flipBit(int pos) {
    int bit = getBit(pos);
    if (bit != -1) {
        bit = 1 - bit;
        binaryString[pos] = (char)(bit + '0');
    }
}

int Individual::getMaxOnes() {
    int* D = new int[binaryString.size()];
    if (binaryString[0] == '1')
        D[0] = 1;
    else
        D[0] = 0;
    int max_ones = D[0];

    for (int i = 1; i < binaryString.size(); ++i) {
        if (binaryString[i] == '1') {
            if (binaryString[i - 1] == '1') {
                D[i] = D[i - 1] + 1;
            }
            else {
                D[i] = 1;
            }
        }
        else {
            D[i] = 0;
        }

        max_ones = std::max(max_ones, D[i]);
    }
    delete [] D;
    return max_ones;
}

int Individual::getLength() {
    return binaryString.size();
}