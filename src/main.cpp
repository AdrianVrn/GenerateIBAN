#include <iostream>
#include "genIBAN.h"

using namespace std;
int main()
{

#ifdef IBAN_STRING_INT_VOID
    genIBAN gen1;
    gen1.generateRandIBAN();
    std::cout << gen1.getIBAN() << std::endl;
#else
    std::cout<< "Hello World!" << std::endl;
#endif

    return 0;
}
