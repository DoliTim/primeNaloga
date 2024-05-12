#include "prime.h"

Prime::Prime(unsigned int iN) : m_iN(iN) {};

/**
* @brief isPrime Vrne true, če je iN pravo praštevilo in false sicer
* @param iN Število za preverjanje
* @return true, če je iN pravo praštevilo in false sicer
*/
bool Prime::isPrime(unsigned int iN) const
{
    if (iN < 2) {
        return false;
    }
    for (unsigned int iX = 2; iX < iN; ++iX) {
        if (iN % iX == 0)
            return false;
    }
    return true;
}
/**
* @brief isSemiPrime Vrne true, če je iN polpraštevilo in false sicer
* @param iN Število za preverjanje
* @return true, če je iN polpraštevilo in false sicer
*/
bool Prime::isSemiPrime(unsigned int iN) const
{
    int iCnt = 0;
    for (unsigned int iX = 2; iX * iX <= iN && iCnt < 2; ++iX) {
        while ((iN % iX == 0)) {
            iN /= iX;
            ++iCnt;
        }
    }

    if (iN > 1) {
        iCnt++;
    }
    return iCnt == 2;
}
