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
    std::map<std::string, int> common_leftover_map = {};
    for (LeftoverRecord record : leftover_records_) {
        common_leftover_map.insert({record.GetFoodName(), 0});
        common_leftover_map[record.GetFoodName()]++;
    }

    int most_common_leftovers = 0;
    std::vector<std::string> common_leftover;
    for (auto& it : common_leftover_map) {
        if(it.second > most_common_leftovers) {
            most_common_leftovers = it.second;
        }
    }

    for (auto& it : common_leftover_map) {
        common_leftover.push_back(it.first);
    }
    return common_leftover;
}
std::vector<std::string> LeftoverReport::GetMostCostlyLeftoverProducingMeals() const {
    std::map<std::string, int> most_costly_meals_map = {};
    for (LeftoverRecord record : leftover_records_) {
     //   most_costly_meals_map.insert({record.GetMeal(), 0});
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
        }
    }

    for (auto& it : common_leftover_reason_map) {
        leftover_reason.push_back(it.first);
    }
    return leftover_reason;
}

std::vector<std::string> LeftoverReport::GetMostCommonDisposalMechanisms() const {
    std::map<std::string, int> most_common_disposal_mechanism_map = {};
    for (const LeftoverRecord& record : leftover_records_) {
        // most_common_disposal_mechanism_map.insert({record.GetDisposalMechanism(), 0});
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
    //for (auto& it : most_common_disposal_mechanism_map) {
    //    if (it.second > most_common_disposal_mechanism) {
    //        most_common_disposal_mechanism = it.second;
    //    }
    //}

    //for (auto& it : most_common_disposal_mechanism_map) {
    //    disposal_mechanism.push_back(it.first);
    //}
    // return disposal_mechanism;
}

std::vector<std::string> LeftoverReport::GetSuggestedLeftoverReductionStrategies() const {
    std::map<std::string, int> suggested_strategies_map;
    for (const LeftoverRecord& record : leftover_records_) {
        //suggested_strategies_map.insert({record.GetLeftoverReason(), 0});
        suggested_strategies_map[record.GetLeftoverReason()]++;
    }

    std::string most_common_reason;
    int suggest_strategies = 0;
    for (const auto& it : suggested_strategies_map) {
        if (it.second > suggest_strategies) {
            suggest_strategies = it.second;
            most_common_reason = it.first;
        }
    }
    std::vector<std::string> suggest_leftover_strategies;
    if (most_common_reason == "Expired") {
        suggest_leftover_strategies.push_back("Donate before expiration");
    }
    if (most_common_reason == "Tastes bad") {
        suggest_leftover_strategies.push_back("Buy less food");
    }
    if (most_common_reason == "Too much leftovers") {
        suggest_leftover_strategies.push_back("Buy less food");
        suggest_leftover_strategies.push_back("Cook small servings");
    }
    if (most_common_reason != "Expired") {
        suggest_leftover_strategies.push_back("Recycle leftovers");
    }
    return suggest_leftover_strategies;
}