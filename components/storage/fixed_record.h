#ifndef F_RECORD
#define F_RECORD

#include <array>

struct FixedRecord {
    std::array<int, 9> data;

    FixedRecord() {
        // TODO: do we really want to do this        
    };
};


#endif