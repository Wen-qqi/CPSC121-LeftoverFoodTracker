// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

#include "leftover_record.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_record.h), only
// if you didn't implement them inline within leftover_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftLeftoverRecord
// class.
// ===================================================================

//std::string LeftoverRecord::GetDate() const { return date_;}

// void LeftoverRecord::SetDate(const std::string& date) const { date_ = date; }

//std::string LeftoverRecord::GetMeal() const{
//   return meal_;
// }

//void LeftoverRecord::SetMeal(const std::string& meal) const {
//    meal_ = meal;
// }

// std::string LeftoverRecord::GetFoodName() const {
//    return food_name_;
// }

// void LeftoverRecord::SetFoodName(const std::string& food_name) const {
//     food_name_ = food_name;
// }

// double LeftoverRecord::GetQuantityOunces() const {
//    return quantity_ounces_;
// }

// void LeftoverRecord::SetQuantityOunces(const double& quantity_ounce) const {
//    quantity_ounces_ = quantity_ounce;
// }

// std::string LeftoverRecord::GetLeftoverReason() const {
//    return leftover_reason_;
// }

// void LeftoverRecord::SetLeftoverReason(const std::string& leftover_reason) const {
//    leftover_reason_ = leftover_reason;
// }

// std::string LeftoverRecord::GetDisposalMechanism() const {
//    return disposal_mechanism_;
// }

// void LeftoverRecord::SetDisposalMechanism(const std::string& disposal_mechanism) const {
//     disposal_mechanism_ = disposal_mechanism;
// }

// double LeftoverRecord::GetCost() const {
//     return cost_;
// }
// void LeftoverRecord::SetCost(double cost) {
//    cost_ = cost;
// }

bool LeftoverRecord::operator==(const LeftoverRecord &other) {
    if (date_ == other.date_ && meal_ == other.meal_
        && food_name_ == other.food_name_ &&
        quantity_ounces_ == other.quantity_ounces_
        && leftover_reason_ == other.leftover_reason_ &&
        disposal_mechanism_ == other.disposal_mechanism_
        && cost_ == other.cost_) {
      return true;
    } else {
      return false;
    }
}

double LeftoverRecord::GetCost() const {
    return cost_;
}
void LeftoverRecord::SetCost(double cost) {
    cost_ = cost;
}

std::string LeftoverRecord::GetDate() const {
    return date_;
}

void LeftoverRecord::SetDate(const std::string &date) {
    date_ = date;
}

// Meal
std::string LeftoverRecord::GetMeal() const {
    return meal_;
}
void LeftoverRecord::SetMeal(const std::string &meal) {
    meal_ = meal;
}

  // Food Name
std::string LeftoverRecord::GetFoodName() const {
    return food_name_;
}
void LeftoverRecord::SetFoodName(const std::string &food_name) {
    food_name_ = food_name;
}

  // Quantity Ounce
double LeftoverRecord::GetQuantityOunces() const {
    return quantity_ounces_;
}

void LeftoverRecord::SetQuantityOunces(double quantity_ounce) {
    quantity_ounces_ = quantity_ounce;
}

  // Leftover Reason
std::string LeftoverRecord::GetLeftoverReason() const {
    return leftover_reason_;
}
void LeftoverRecord::SetLeftoverReason(const std::string &leftover_reason) {
    leftover_reason_ = leftover_reason;
}

  // Disposal Mechanism
std::string LeftoverRecord::GetDisposalMechanism() const {
    return disposal_mechanism_;
}
void LeftoverRecord::SetDisposalMechanism(const std::string &disposal_mechanism) {
    disposal_mechanism_ = disposal_mechanism;
}
