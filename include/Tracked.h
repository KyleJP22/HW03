/* Copyright 2018 */
#include "../lib/include/point.h"

namespace csce240 {

  class Tracked : public csce240::MobileRobot {
  public:
    Tracked(double x, double y);
    Tracked(double z, double y, double speed);
    Tracked(csce240::two_dim:Point p);
    Tracked(csce240::two_dim::Point p, double speed);

    ~Tracked();

    const csce240::two_dim::Point location() const;
    const bool CanTranslateTo(const csce240::two_dim::Point& position) const;

  private:
    cscd240::two_dim::Point position_;
  };
};
