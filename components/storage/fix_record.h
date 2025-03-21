#ifndef F_RECORD
#define F_RECORD

#include <array>

struct FixedRecord {
    std::array<int, 9> data;

    FixedRecord();
};


#endif