#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual {
private:
    std::string binaryString;
public:
    Individual(int length);
    Individual(const std::string& binaryString);

    std::string getString();

    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
};


#endif //PRAC6_DNA_INDIVIDUAL_H
