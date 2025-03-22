#include "page.h"
#include <iostream>

int main() {
    FixedRecord fixedRecord = FixedRecord();

    std::cout << "\n";

    FixedPage *fixedPagePtr = new FixedPage(fixedRecord.Size()); // returns a pointer to the dynamically allocated memory

    delete(fixedPagePtr); // need to free mmr
    
    return 0;
}