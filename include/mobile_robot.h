/* Copyright 2018 */
#ifndef _03HW_SOL_INCLUDE_MOBILE_ROBOT_H_  // NOLINT
#define _03HW_SOL_INCLUDE_MOBILE_ROBOT_H_  // NOLINT

#include <string>
#include "../lib/include/point.h"

namespace csce240 {

class MobileRobot {
 public:
  MobileRobot(double speed = 0.0);
  ~MobileRobot();

  double speed() const;

  const std::string id() const;
  bool id(const std::string& id);

  static bool IsUnique(const std::string& id);
};

}  // namespace csce240

#endif  // NOLINT
