/* Copyright 2018 */

#include "../include/Tracked.h"

Tracked::Tracked(double x, double y) : csce240::MobileRobot() {
  csce240::two_dim::Point p = Points(x,y);
  this->position = p;
}

csce240::Tracked::Tracked(double x, double y, double speed) : csce240::MobileRobot(speed) {

}

csce240::Tracked::Tracked(csce240::two_dim::Point) : csce240::MobileRobot() {

}

csce240::Tracked::Tracked(csce240::two_dim::Point, double speed) {

}

const csce240::two_dim::Point csce240::Tracked::position() const {
  return this->position_;
}

const bool csce240::Tracked::CanTranslateTo(const csce240::two_dim::Point& other_point) const {
  double c = 0.0;
  double x_diff = other_point.x() - this->position;
  double y_diff = other_point.y() - this->position;

  csce240::two_dim::Vector distance = csce240::two_dim::Vector(x_diff, y_diff);
  c =distance.GetLength();
}
