// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

#include "leftover_report.h"

#include <algorithm>
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
  std::map<std::string, int> common_leftover_map = {};
  for (LeftoverRecord record : leftover_records_) {
    common_leftover_map[record.GetFoodName()]++;
  }

  int most_common_leftovers = 0;
  std::vector<std::string> common_leftover;
  for (auto& it : common_leftover_map) {
    if (it.second > most_common_leftovers) {
      most_common_leftovers = it.second;
      common_leftover.clear();
      common_leftover.push_back(it.first);
    } else if (it.second == most_common_leftovers) {
      common_leftover.push_back(it.first);
    }
  }

  return common_leftover;
}

std::vector<std::string> LeftoverReport::GetMostCostlyLeftoverProducingMeals()
    const {
  std::map<std::string, int> most_costly_meals_map = {};
  for (LeftoverRecord record : leftover_records_) {
    most_costly_meals_map[record.GetMeal()]++;
  }

  int most_costly_meal = 0;
  for (const auto& pair : most_costly_meals_map) {
    if (pair.second > most_costly_meal) {
      most_costly_meal = pair.second;
    }
  }

  std::vector<std::string> costly_meal;
  for (const auto& pair : most_costly_meals_map) {
    if (pair.second == most_costly_meal) {
      costly_meal.push_back(pair.first);
    }
  }
  return costly_meal;
}

double LeftoverReport::GetTotalCostOfLeftover() const {
  double total_cost = 0.0;
  for (const LeftoverRecord& record : leftover_records_) {
    total_cost += record.GetCost();
  }
  return total_cost;
}

std::vector<std::string> LeftoverReport::GetMostCommonLeftoverReasons() const {
  std::map<std::string, int> common_leftover_reason_map = {};
  for (LeftoverRecord record : leftover_records_) {
    common_leftover_reason_map.insert({record.GetLeftoverReason(), 0});
    common_leftover_reason_map[record.GetLeftoverReason()]++;
  }

  int most_common_leftover_reasons = 0;
  std::vector<std::string> leftover_reason;
  for (auto& it : common_leftover_reason_map) {
    if (it.second > most_common_leftover_reasons) {
      most_common_leftover_reasons = it.second;
      leftover_reason.clear();
      leftover_reason.push_back(it.first);
    } else if (it.second == most_common_leftover_reasons) {
      leftover_reason.push_back(it.first);
    }
  }

  return leftover_reason;
}

std::vector<std::string> LeftoverReport::GetMostCommonDisposalMechanisms()
    const {
  std::map<std::string, int> most_common_disposal_mechanism_map = {};
  for (const LeftoverRecord& record : leftover_records_) {
    most_common_disposal_mechanism_map[record.GetDisposalMechanism()]++;
  }

  int most_common_disposal_mechanism = 0;
  for (const auto& pair : most_common_disposal_mechanism_map) {
    if (pair.second > most_common_disposal_mechanism) {
      most_common_disposal_mechanism = pair.second;
    }
  }

  std::vector<std::string> disposal_mechanism;
  for (const auto& pair : most_common_disposal_mechanism_map) {
    if (pair.second == most_common_disposal_mechanism) {
      disposal_mechanism.push_back(pair.first);
    }
  }
  return disposal_mechanism;
}

std::vector<std::string>
LeftoverReport::GetSuggestedLeftoverReductionStrategies() const {
  std::map<std::string, int> suggested_strategies_map;
  for (const LeftoverRecord& record : leftover_records_) {
    suggested_strategies_map[record.GetLeftoverReason()]++;
  }

  std::vector<std::string> most_common_reasons;
  int suggest_strategies = 0;
  for (const auto& it : suggested_strategies_map) {
    if (it.second > suggest_strategies) {
      suggest_strategies = it.second;
      most_common_reasons.clear();
      most_common_reasons.push_back(it.first);
    } else if (it.second == suggest_strategies) {
      most_common_reasons.push_back(it.first);
    }
  }

  std::vector<std::string> suggest_leftover_strategies;
  if (!most_common_reasons.empty()) {
    if (std::find(most_common_reasons.begin(), most_common_reasons.end(),
                  "Expired") == most_common_reasons.end()) {
      suggest_leftover_strategies.push_back("Recycle left overs");
    }
  }

  if (!most_common_reasons.empty()) {
    for (const auto& reason : most_common_reasons) {
      if (reason == "Expired") {
        if (std::find(suggest_leftover_strategies.begin(),
                      suggest_leftover_strategies.end(),
                      "Donate before expiration") ==
            suggest_leftover_strategies.end()) {
          suggest_leftover_strategies.push_back("Donate before expiration");
        }
      } else if (reason == "Tastes bad") {
        if (std::find(suggest_leftover_strategies.begin(),
                      suggest_leftover_strategies.end(),
                      "Buy less food") == suggest_leftover_strategies.end()) {
          suggest_leftover_strategies.push_back("Buy less food");
        }
      } else if (reason == "Too much left overs") {
        if (std::find(suggest_leftover_strategies.begin(),
                      suggest_leftover_strategies.end(),
                      "Buy less food") == suggest_leftover_strategies.end()) {
          suggest_leftover_strategies.push_back("Buy less food");
        }
        if (std::find(suggest_leftover_strategies.begin(),
                      suggest_leftover_strategies.end(),
                      "Cook small servings") ==
            suggest_leftover_strategies.end()) {
          suggest_leftover_strategies.push_back("Cook small servings");
        }
      }
    }
  }

  return suggest_leftover_strategies;
}