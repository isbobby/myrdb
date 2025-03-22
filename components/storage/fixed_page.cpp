#include <iostream>
#include <iterator>

#include "page.h"
#include "fixed_record.h"

FixedPage::FixedPage(int recordSize) {
    int blockSize = std::size(Data);

    int maxRecordCount = blockSize / recordSize;

    int remainingSize = blockSize - (maxRecordCount * recordSize);

    for (;remainingSize < maxRecordCount;) {
        remainingSize += recordSize;
        maxRecordCount -= 1;
    }

    FixedPage::RecordNum = maxRecordCount;
    FixedPage::HeaderSize = maxRecordCount;
}

int FixedPage::Insert(FixedRecord record) {
    return 0;
}

FixedRecord FixedPage::Find(int recordID) {
    return FixedRecord();
}

int FixedPage::Update(FixedRecord newRecord) {
    return 0;
}

int FixedPage::Delete(int recordID) {
    return 0;
}