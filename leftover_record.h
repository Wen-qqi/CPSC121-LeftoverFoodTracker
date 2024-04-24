#include <iostream>
#include <vector>

#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

class LeftoverRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  // Date
  std::string GetDate() const;
  void SetDate(const std::string &date);

  // Meal
  std::string GetMeal() const;
  void SetMeal(const std::string &meal);

  // Food Name
  std::string GetFoodName() const;
  void SetFoodName(const std::string &food_name);

  // Quantity Ounce
  double GetQuantityInOz() const;
  void SetQuantityInOz(double qty_in_oz);

  // Leftover Reason
  std::string GetLeftoverReason() const;
  void SetLeftoverReason(const std::string &leftover_reason);

  // Disposal Mechanism
  std::string GetDisposalMechanism() const;
  void SetDisposalMechanism(const std::string &disposal_mechanism);

  // Cost
  double GetCost() const;
  void SetCost(double cost);

  bool operator==(const LeftoverRecord &other);

 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double qty_in_oz_;
  std::string leftover_reason_;
  std::string disposal_mechanism_;
  double cost_;
};
#endif
