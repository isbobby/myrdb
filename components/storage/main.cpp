#include "page.h"
#include <iostream>

int main() {
    FixedPage *fixedPagePtr = new FixedPage(3); // returns a pointer to the dynamically allocated memory

    delete(fixedPagePtr); // need to free mmr
    
    return 0;
}