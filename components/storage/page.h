#ifndef BLOCK_H // todo: explain what the guards around .h file do in note
#define BLOCK_H

#include <array>

#include "fixed_record.h"
#include "variable_record.h"

struct Page {
    std::array<int, 128> data;
};

struct FixedPage : Page {
    FixedPage(int recordSize);
    int Insert(FixedRecord record);
    FixedRecord Find(int recordID);
    int Update(FixedRecord newRecord);
    int Delete(int recordID);
};

struct VariablePage : Page {
    VariablePage();
    int Insert(VariableRecord record);
    VariableRecord Find(int recordID);
    int Update(VariableRecord newRecord);
    int Delete(int recordID);
};

#endif
