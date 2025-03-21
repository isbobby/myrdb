#ifndef BLOCK_H // todo: explain what the guards around .h file do in note
#define BLOCK_H

#include <array>

#include "fix_record.h"
#include "variable_record.h"

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

    int Insert(FixedRecord record);
    FixedRecord Find(int recordID);
    int Update(FixedRecord newRecord);
    int Delete(int recordID);
};

struct VariablePage : Page {
    VariablePage() {
        // create a directory, starting from the end of block
        data.fill(0);
    }

    int Insert(VariableRecord record);
    VariableRecord Find(int recordID);
    int Update(VariableRecord newRecord);
    int Delete(int recordID);
};

#endif
