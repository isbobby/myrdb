#include "page.h"
#include "variable_record.h"

VariablePage::VariablePage() {

}

int VariablePage::Insert(VariableRecord record) {
    return 0;
}

VariableRecord VariablePage::Find(int recordID) {
    return VariableRecord();
}

int VariablePage::Update(VariableRecord newRecord) {
    return 0;
}

int VariablePage::Delete(int recordID) {
    return 0;
}