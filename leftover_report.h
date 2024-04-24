#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

#include <iostream>
#include <map>
#include <vector>

#include "leftover_record.h"

// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

class LeftoverReport {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  LeftoverReport(const std::vector<LeftoverRecord> &leftover_records)
      : leftover_records_(leftover_records) {}

  std::vector<std::string> GetMostCommonLeftover() const;
  std::vector<std::string> GetMostCostlyLeftoverProducingMeals() const;
  double GetTotalCostOfLeftover() const;
  std::vector<std::string> GetMostCommonLeftoverReasons() const;
  std::vector<std::string> GetMostCommonDisposalMechanisms() const;
  std::vector<std::string> GetSuggestedLeftoverReductionStrategies() const;

 private:
  const std::vector<LeftoverRecord> &leftover_records_;
  std::vector<std::string> most_common_leftover_;
  std::vector<std::string> most_costly_leftover_producing_meals_;
  double total_cost_of_leftover_;
  std::vector<std::string> most_common_leftover_reasons_;
  std::vector<std::string> most_common_disposal_mechanisms_;
  std::vector<std::string> suggested_strategies_to_reduce_leftovers_;
};
#endif