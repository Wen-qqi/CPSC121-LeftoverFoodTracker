// Wen Fan
// CPSC 121L - 11
// May 03, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi

#include "leftover_tracker_backend.h"

#include <filesystem>

#include "leftover_record.h"
#include "leftover_report.h"
#include "leftover_tracker.h"
#include "server_utils/rapidjson/document.h"      // rapidjson's DOM-style API
#include "server_utils/rapidjson/prettywriter.h"  // for stringify JSON
#include "server_utils/rapidjson/rapidjson.h"
#include "server_utils/rapidjson/stringbuffer.h"  // wrapper of C stream for prettywriter as output
#include "server_utils/rapidjson/writer.h"

// Util function to convert a LeftoverRecord class object into a serialized
// JSON object.
void SerializeLeftoverRecordToJSON(
    const LeftoverRecord &record,
    rapidjson::Writer<rapidjson::StringBuffer> *writer) {
  writer->StartObject();

  writer->String("date_");  // DO NOT MODIFY
  std::string date = record.GetDate();
  // TODO 1. Use the accessor/getter function for date from the
  // LeftoverRecord class object to get the date and store it in the date
  // string declared above.

  writer->String(date.c_str());

  writer->String("meal_");  // DO NOT MODIFY
  std::string meal = record.GetMeal();
  // TODO 2. Use the accessor/getter function for meal from the
  // LeftoverRecord class object to get the meal and store it in the meal
  // string declared above.

  writer->String(meal.c_str());

  writer->String("food_name_");  // DO NOT MODIFY
  std::string food_name = record.GetFoodName();
  // TODO 3. Use the accessor/getter function for food name from the
  // LeftoverRecord class object to get the food name and store it in the
  // food_name string declared above.

  writer->String(food_name.c_str());

  writer->String("qty_in_oz_");  // DO NOT MODIFY
  double quantity = record.GetQuantityInOz();
  // TODO 4. Use the accessor/getter function for quantity from the
  // LeftoverRecord class object to get the quantity and store it in the
  // quantity variable declared above.

  writer->Double(quantity);

  writer->String("leftover_reason_");  // DO NOT MODIFY
  std::string leftover_reason = record.GetLeftoverReason();
  // TODO 5. Use the accessor/getter function for leftover reason from the
  // LeftoverRecord class object to get the leftover reason and store it in
  // the leftover_reason string declared above.

  writer->String(leftover_reason.c_str());

  writer->String("disposal_mechanism_");  // DO NOT MODIFY
  std::string disposal_mechanism = record.GetDisposalMechanism();
  // TODO 6. Use the accessor/getter function for disposal mechanism from the
  // LeftoverRecord class object to get the disposal mechanism and store it
  // in the disposal_mechanism string declared above.

  writer->String(disposal_mechanism.c_str());

  writer->String("cost_");  // DO NOT MODIFY
  double cost = record.GetCost();
  // TODO 7. Use the accessor/getter function for cost from the
  // LeftoverRecord class object to get the cost and store it in the cost
  // variable declared above.

  writer->Double(cost);

  writer->EndObject();
}

// Util function to convert a serialized JSON object in to a LeftoverRecord
// class object.
LeftoverRecord DeserializeLeftoverRecordFromJSON(
    const rapidjson::Value &json_obj) {
  LeftoverRecord record;
  /* TODO 1. Use the mutator/setter function for date from the LeftoverRecord
   *  class to set the date in `record` object. You can get the date from JSON
   *  object as follows: `json_obj["date_"].GetString()`.
   *  Use that as a function  argument for the mutator that you'll call.
   */
  // if (json_obj.HasMember("date_") && json_obj["date_"].IsString()) {
  //    record.SetDate(json_obj["date_"].GetString());
  // }
  record.SetDate(json_obj["date_"].GetString());

  /* TODO 2. Use the mutator/setter function for meal from the LeftoverRecord
   *  class to set the meal in `record` object. You can get the meal from JSON
   *  object as follows: `json_obj["meal_"].GetString()`.
   *  Use that as a function  argument for the mutator that you'll call.
   */
  // if (json_obj.HasMember("meal_") && json_obj["meal_"].IsString()) {
  //     record.SetMeal(json_obj["meal_"].GetString());
  // }
  record.SetMeal(json_obj["meal_"].GetString());

  /* TODO 3. Use the mutator/setter function for food name from the
   * LeftoverRecord class to set the food name in `record` object. You can
   * get the food name from the JSON object as follows:
   * `json_obj["food_name_"].GetString()`. Use that as a function  argument for
   * the mutator that you'll call.
   */
  // if (json_obj.HasMember("food_name_") && json_obj["food_name_"].IsString())
  // {
  //     record.SetFoodName(json_obj["food_name_"].GetString());
  // }
  record.SetFoodName(json_obj["food_name_"].GetString());

  /* TODO 4. Use the mutator/setter function for quantity from the
   * LeftoverRecord class to set the quantity in `record` object. You can get
   * the quantity from the JSON object as follows:
   * `json_obj["qty_in_oz_"].GetDouble()`. Use that as an function  argument for
   * the mutator that you'll call.
   */
  // if (json_obj.HasMember("qty_in_oz_") && json_obj["qty_in_oz_"].IsNumber())
  // {
  //     record.SetQuantityOunces(json_obj["qty_in_oz_"].GetDouble());
  // }
  record.SetQuantityInOz(json_obj["qty_in_oz_"].GetDouble());

  /* TODO 5. Use the mutator/setter function for leftover reason from the
   * LeftoverRecord class to set the leftover reason in `record` object. You
   * can get the leftover reason from the JSON object as follows:
   * `json_obj["leftover_reason_"].GetString()`. Use that as a function argument
   * for the mutator that you'll call.
   */
  // if (json_obj.HasMember("leftover_reason_") &&
  // json_obj["leftover_reason_"].IsString()) {
  //     record.SetLeftoverReason(json_obj["leftover_reason_"].GetString());
  // }
  record.SetLeftoverReason(json_obj["leftover_reason_"].GetString());

  /* TODO 6. Use the mutator/setter function for disposal mechanism from the
   * LeftoverRecord class to set the disposal mechanism in `record` object.
   * You can get the disposal mechanism from the JSON object as follows:
   * `json_obj["disposal_mechanism_"].GetString()`. Use that as an function
   * argument for the mutator that you'll call.
   */
  // if (json_obj.HasMember("disposal_mechanism_") &&
  // json_obj["disposal_mechanism_"].IsString()) {
  //     record.SetDisposalMechanism(json_obj["disposal_mechanism_"].GetString());
  // }
  record.SetDisposalMechanism(json_obj["disposal_mechanism_"].GetString());

  /* TODO 7. Use the mutator/setter function for cost from the LeftoverRecord
   *  class to set the cost in `record` object. You can get the cost from the
   *  JSON object as follows: `json_obj["cost_"].GetDouble()`. Use that as an
   *  function  argument for the mutator that you'll call.
   */
  // if (json_obj.HasMember("cost_") && json_obj["cost_"].IsNumber()) {
  //     record.SetCost(json_obj["cost_"].GetDouble());
  // }
  record.SetCost(json_obj["cost_"].GetDouble());

  return record;
}

// Util function to convert a LeftoverRecord class object into a Crow JSON
// object.
crow::json::wvalue LeftoverRecordToCrowJSON(const LeftoverRecord &record) {
  crow::json::wvalue record_json({});
  std::string date = record.GetDate();
  // TODO 1. Use the accessor/getter function for date from the
  // LeftoverRecord class object to get the date and store it in the date
  // string declared above.
  record_json["date"] = date;
  std::string meal = record.GetMeal();
  // TODO 2. Use the accessor/getter function for meal from the
  // LeftoverRecord class object to get the meal and store it in the meal
  // string declared above.
  record_json["meal"] = meal;
  std::string food_name = record.GetFoodName();
  // TODO 3. Use the accessor/getter function for food name from the
  // LeftoverRecord class object to get the food name and store it in the
  // food_name string declared above.
  record_json["food_name"] = food_name;
  double quantity = record.GetQuantityInOz();
  // TODO 4. Use the accessor/getter function for quantity from the
  // LeftoverRecord class object to get the quantity and store it in the
  // quantity variable declared above.
  record_json["qty_in_oz"] = quantity;
  std::string leftover_reason = record.GetLeftoverReason();
  // TODO 5. Use the accessor/getter function for leftover reason from the
  // LeftoverRecord class object to get the leftover reason and store it in
  // the leftover_reason string declared above.
  record_json["leftover_reason"] = leftover_reason;
  std::string disposal_mechanism = record.GetDisposalMechanism();
  // TODO 6. Use the accessor/getter function for disposal mechanism from the
  // LeftoverRecord class object to get the disposal mechanism and store it
  // in the disposal_mechanism string declared above.
  record_json["disposal_mechanism"] = disposal_mechanism;
  double cost = record.GetCost();
  // TODO 7. Use the accessor/getter function for cost from the
  // LeftoverRecord class object to get the cost and store it in the cost
  // variable declared above.
  record_json["cost"] = cost;
  return record_json;
}

// Util function to convert a LeftoverReport object into a serialized
// JSON object.
crow::json::wvalue LeftoverReportToCrowJSON(const LeftoverReport &report) {
  crow::json::wvalue report_json({});

  std::vector<std::string> most_common_disposal_mechanisms =
      report.GetMostCommonDisposalMechanisms();
  // TODO: Call the member function of LeftoverReport class that returns all
  // the most common disposal mechanisms as a vector of strings. Store the
  // result in the vector declared above.
  report_json["most_common_disposal_mechanism_"] =
      most_common_disposal_mechanisms;

  std::vector<std::string> most_common_leftovers =
      report.GetMostCommonLeftover();
  // TODO: Call the member function of LeftoverReport class that returns all
  // the most common leftovers as a vector of strings. Store the result in
  // the vector declared above.
  report_json["most_common_leftover_"] = most_common_leftovers;

  std::vector<std::string> most_common_leftover_reasons =
      report.GetMostCommonLeftoverReasons();
  // TODO: Call the member function of LeftoverReport class that returns all
  // the most commonwastage reasons as a vector of strings. Store the result in
  // the vector declared above.
  report_json["most_common_leftover_reason_"] = most_common_leftover_reasons;

  std::vector<std::string> most_costly_leftover_producing_meals =
      report.GetMostCostlyLeftoverProducingMeals();
  // TODO: Call the member function of LeftoverReport class that returns all
  // the most costly waste producing meals as a vector of strings. Store the
  // result in the vector declared above.
  report_json["most_leftover_producing_meal_"] =
      most_costly_leftover_producing_meals;

  std::vector<std::string> suggested_strategies_to_reduce_leftover =
      report.GetSuggestedLeftoverReductionStrategies();
  // TODO: Call the member function of LeftoverReport class that returns all
  // the suggested strategies as a vector of strings. Store the result in the
  // vector declared above.
  report_json["suggested_strategies_to_reduce_leftover_"] =
      suggested_strategies_to_reduce_leftover;

  double total_cost_of_leftover = -9999.0;
  total_cost_of_leftover = report.GetTotalCostOfLeftover();
  // TODO: Call the member function of LeftoverReport class that returns the
  // total cost of leftovers as a double. Store the result in the double
  // declared.
  report_json["total_cost_of_leftover_"] = total_cost_of_leftover;

  return report_json;
}

// Util function to convert a crow query string into a LeftoverRecord class
// object.
LeftoverRecord QueryStringToLeftoverRecord(
    const crow::query_string &query_string) {
  LeftoverRecord record{};
  // TODO 1. Get the date from the query_string using query_string.get("date"),
  // and set it in the `record` object using the setter in LeftoverRecord
  // class.
  record.SetDate(query_string.get("date"));

  // TODO 2. Get the meal from the query_string using query_string.get("meal"),
  // and set it in the `record` object using the setter in LeftoverRecord
  // class.
  record.SetMeal(query_string.get("meal"));

  // TODO 3. Get the food name from the query_string using
  // query_string.get("food_name"), and set it in the `record` object using the
  // setter in LeftoverRecord class.
  record.SetFoodName(query_string.get("food_name"));

  // TODO 4. Get the quantity from the query_string using
  // std::stod(query_string.get("qty_in_oz")), and set it in the `record` object
  // using the setter in LeftoverRecord class.
  record.SetQuantityInOz(std::stod(query_string.get("qty_in_oz")));

  // TODO 5. Get the leftover reason from the query_string using
  // query_string.get("leftover_reason"), and set it in the `record` object
  // using the setter in LeftoverRecord class.
  record.SetLeftoverReason(query_string.get("leftover_reason"));

  // TODO 6. Get the disposal mechanism from the query_string using
  // query_string.get("disposal_mechanism"), and set it in the `record` object
  // using the setter in LeftoverRecord class.
  record.SetDisposalMechanism(query_string.get("disposal_mechanism"));

  // TODO 7. Get the cost from the query_string using
  // std::stod(query_string.get("cost")), and set it in the `record` object
  // using the setter in LeftoverRecord class.
  record.SetCost(std::stod(query_string.get("cost")));

  return record;
}

bool LeftoverTrackerBackend::LoadRecordsFromJSONFile() {
  std::ifstream records_file{leftover_records_filepath_};
  if (!records_file.is_open()) {
    std::filesystem::remove(leftover_records_filepath_);
    return false;
  }

  std::stringstream buffer;
  buffer << records_file.rdbuf();

  std::string s = buffer.str();
  rapidjson::Document doc;

  if (s.empty()) {
    std::filesystem::remove(leftover_records_filepath_);
    return false;
  }

  std::string validJson(s);

  bool doc_parse_error = doc.Parse(validJson.c_str()).HasParseError();
  if (doc_parse_error || !doc.IsArray()) {
    std::filesystem::remove(leftover_records_filepath_);
    return false;
  }

  for (rapidjson::Value::ConstValueIterator itr = doc.Begin(); itr != doc.End();
       ++itr) {
    LeftoverRecord record = DeserializeLeftoverRecordFromJSON(*itr);
    // TODO: Call the member function in the LeftoverTracker class to add a
    // `record`
    tracker_.AddRecord(record);
  }

  records_file.close();
  return true;
}

bool LeftoverTrackerBackend::WriteRecordsToJSONFile() const {
  std::ofstream records_file{leftover_records_filepath_};
  // Get the records from leftover_tracker_, convert to JSON and
  // save to file.
  rapidjson::StringBuffer ss;
  rapidjson::Writer<rapidjson::StringBuffer> writer(ss);
  writer.StartArray();

  const std::vector<LeftoverRecord> &records = tracker_.GetRecords();
  // TODO: Call the member function in the LeftoverTracker class, on the
  // member object that you added in leftover_tracker.h, that returns all
  // the LeftoverRecord objects. Store the returned records in the vector
  // declared above. Also change the data type of the records vector to `const
  // std::vector<LettoverRecord>&`.
  // const std::vector<LeftoverRecord>&

  for (LeftoverRecord record : records) {
    SerializeLeftoverRecordToJSON(record, &writer);
  }
  writer.EndArray();

  records_file << ss.GetString();

  records_file.flush();
  records_file.close();
  return true;
}

crow::json::wvalue LeftoverTrackerBackend::AddRecord(
    const crow::query_string &query_string) {
  LeftoverRecord record = QueryStringToLeftoverRecord(query_string);
  crow::json::wvalue status;
  bool add_result = tracker_.AddRecord(record);
  // TODO: Call the member function in the LeftoverTracker class, on the
  // member object that you added in leftover_tracker.h, that adds a
  // `record` and returns the status of the add operation as a bool. Store the
  // returned value in the bool declared above.
  // add_result = tracker_.AddRecord(record);
  status["success"] = add_result;
  return status;
}

crow::json::wvalue LeftoverTrackerBackend::DeleteRecord(
    const crow::query_string &query_string) {
  LeftoverRecord record = QueryStringToLeftoverRecord(query_string);
  crow::json::wvalue status;
  bool delete_result = false;
  // tracker_.DeleteRecord(record);
  // TODO: Call the member function in the LefrtoverTracker class, on the
  // member object that you added in leftovere_tracker.h, that deletes
  // `record` and returns the status of the delete operation as a bool. Store
  // the returned value in the bool declared above.
  status["success"] = delete_result;
  return status;
}

crow::json::wvalue LeftoverTrackerBackend::GetRecords() const {
  const std::vector<LeftoverRecord> &records = tracker_.GetRecords();
  // TODO: Call the member function in the LeftoverTracker class, on the
  // member object that you added in leftover_tracker.h, that returns all
  // the LeftoverRecord objects. Store the returned records in the vector
  // declared above. Also change the data type of the records vector to `const
  // std::vector<LeftoverRecord>&`.
  // td::vector<LeftoverRecord>& records;
  // records.push_back(tracker_)

  crow::json::wvalue records_json({});
  records_json["num_records"] = records.size();

  std::vector<crow::json::wvalue> record_json_vector;
  for (const LeftoverRecord &record : records) {
    record_json_vector.push_back(LeftoverRecordToCrowJSON(record));
  }
  records_json["record_array"] = std::move(record_json_vector);
  return records_json;
}

crow::json::wvalue LeftoverTrackerBackend::GetLeftoverReport() const {
  LeftoverReport generated_report = tracker_.GetLeftoverReport();
  // TODO: Call the member function in the LeftoverTracker class, on the
  // member object that you added in leftover_tracker.h, that generates a
  // LeftoverReport object using all the LeftoverRecords and returns it.
  // Store the returned value in the `generated_report` object declared above.
  return LeftoverReportToCrowJSON(generated_report);
}
