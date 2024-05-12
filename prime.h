#ifndef PRIME_H
#define PRIME_H

class Prime
{
public:
    Prime(unsigned int iN);
    bool isPrime(unsigned int iN) const;
    bool isSemiPrime(unsigned int iN) const;

private:
    unsigned int m_iN;
};

#endif // PRIME_H
