#include "page.h"
#include <iostream>

int main() {
    FixedRecord fixedRecord = FixedRecord();

    std::cout << "\n";

    // returns a pointer to the dynamically allocated memory
    FixedPage *fixedPagePtr = new FixedPage(fixedRecord.Size());

    delete(fixedPagePtr); // need to free mmr
    
    return 0;
}