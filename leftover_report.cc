// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

#include "leftover_report.h"
// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_report.h), only
// if you didn't implement them inline within leftover_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverReport
// class.
// ===================================================================

std::vector<std::string> LeftoverReport::GetMostCommonLeftover() const {
    return most_common_leftover_;
}
std::vector<std::string> LeftoverReport::GetMostCostlyLeftoverProducingMeals() const {
    return most_costly_leftover_producing_meals_;
}

double LeftoverReport::GetTotalCostOfLeftover() const {
    return total_cost_of_leftover_;
}

std::vector<std::string> LeftoverReport::GetMostCommonLeftoverReasons() const {
    return most_common_leftover_reasons_;
}

std::vector<std::string> LeftoverReport::GetMostCommonDisposalMechanisms() const {
    return most_common_disposal_mechanisms_;
}

std::vector<std::string> LeftoverReport::GetSuggestedLeftoverReductionStrategies() const {
    return suggested_strategies_to_reduce_leftovers_;
}