#include "page.h"
#include "fixed_record.h"

FixedPage::FixedPage(int recordSize) {
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