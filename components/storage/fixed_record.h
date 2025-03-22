#ifndef F_RECORD
#define F_RECORD

#include <array>
#include <iterator>

struct FixedRecord {
    std::array<int, 9> data;

    FixedRecord() {
        // TODO: do we really want to do this    
    };

    int Size() {
        return std::size(data);
    }
};


#endif