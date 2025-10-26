#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller1 = controller(primary)
motor Motor1 = motor(PORT1, ratio18_1, false);
motor Motor11 = motor(PORT11, ratio18_1, false);
motor Motor10 = motor(PORT10, ratio18_1, false);
motor Motor20 = motor(PORT20, ratio18_1, false);

bool RemoteControlCodeEnabled = true;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}
