#ifndef BLOCK_H // todo: explain what the guards around .h file do in note
#define BLOCK_H

#include <array>

struct Page {
    std::array<int, 128> data;

    Page() {
        data.fill(0);
    }
};

struct FixedPage : Page {
    FixedPage(int recordSize) {
        // create a page header denoting slots with records
        data.fill(0);
    }
};

struct VariablePage : Page {
    VariablePage() {
        // create a directory, starting from the end of block
        data.fill(0);
    }
};

#endif
