// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

#include "leftover_tracker.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_tracker.h), only
// if you didn't implement them inline within leftover_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverTracker
// class.
// ===================================================================

bool LeftoverTracker::AddRecord(const LeftoverRecord& record) {
    for (LeftoverRecord exisiting_record : leftover_records_) {
        if (exisiting_record.GetDate() == record.GetDate() &&
            exisiting_record.GetMeal() == record.GetMeal() &&
            exisiting_record.GetFoodName() == record.GetFoodName() &&
            exisiting_record.GetQuantityOunces() == record.GetQuantityOunces() &&
            exisiting_record.GetLeftoverReason() == record.GetLeftoverReason() &&
            exisiting_record.GetDisposalMechanism() == record.GetDisposalMechanism() &&
            exisiting_record.GetCost() == record.GetCost()) {
                return false;
            }
    }
    leftover_records_.push_back(record);
    return true;
}

//bool LeftoverTracker::DeleteRecord(const LeftoverRecord &record) {}

const std::vector<LeftoverRecord>& LeftoverTracker::GetRecords() const {
    return leftover_records_;
}

LeftoverReport LeftoverTracker::GetLeftoverReport() const {
    LeftoverReport report(leftover_records_);
    return report;
}
